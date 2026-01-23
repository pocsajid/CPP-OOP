#include <iostream>

/*
  ZIEL:
  - Klassen + Vererbung sind vorhanden (Circle/Rect erben von Shape),
    aber Shape hat KEINE virtuellen Methoden.
  - Folge: Aufrufe über Shape&/Shape* binden statisch -> Shape::draw() wird aufgerufen,
    NICHT Circle::draw().
  - Um trotzdem "richtig" zu arbeiten, bauen wir einen manuellen Dispatch:
    switch(kind) + static_cast.
  - Nachteil: Zentraler switch muss bei jedem neuen Typ angepasst werden,
    und falsche Kind/Cast-Kombinationen sind fehleranfällig.
*/

class Shape
{
public:
    enum Kind { CIRCLE, RECT };

protected:
    Kind kind_;

    // Basiskonstruktor setzt den "Typ-Tag"
    Shape(Kind k) : kind_(k) {}

public:
    Kind kind() const { return kind_; }

    // WICHTIG: NICHT virtual!
    void draw() const
    {
        std::cout << "[Shape] generisches Zeichnen (zu ungenau)\n";
    }

    // WICHTIG: NICHT virtual!
    double area() const
    {
        return 0.0;
    }
};

class Circle : public Shape
{
    double r_;

public:
    Circle(double r) : Shape(CIRCLE), r_(r) {}

    // "Überschreibt" nicht wirklich (weil nicht virtual), sondern VERDECKT die Basismethode.
    void draw() const
    {
        std::cout << "Kreis zeichnen, r=" << r_ << "\n";
    }

    double area() const
    {
        return 3.141592653589793 * r_ * r_;
    }
};

class Rect : public Shape
{
    double w_, h_;

public:
    Rect(double w, double h) : Shape(RECT), w_(w), h_(h) {}

    void draw() const
    {
        std::cout << "Rechteck zeichnen, " << w_ << "x" << h_ << "\n";
    }

    double area() const
    {
        return w_ * h_;
    }
};

// Client-Code, der "Shape" verarbeiten will.
// Ohne Polymorphie muss er Typen kennen und selbst verzweigen.
void printInfo_withoutPolymorphism(const Shape& s)
{
    /*
      HÄUFIGE "NOTLÖSUNG":
      - Wir rekonstruieren Polymorphie manuell:
        switch + Cast + Aufruf der konkreten Methoden.
      - Das ist zentralisiert und damit ein Wartungs-Hotspot.
    */
    switch (s.kind())
    {
        case Shape::CIRCLE:
        {
            // Der Cast ist nur sicher, wenn wirklich ein Circle-Objekt dahinter steckt
            const Circle& c = static_cast<const Circle&>(s);
            c.draw();
            std::cout << "Flaeche: " << c.area() << "\n";
            break;
        }
        case Shape::RECT:
        {
            const Rect& r = static_cast<const Rect&>(s);
            r.draw();
            std::cout << "Flaeche: " << r.area() << "\n";
            break;
        }
    }
}

int main()
{
    Circle c(2.0);
    Rect   r(3.0, 4.0);

    // 1) Direkter Aufruf über abgeleiteten Typ funktioniert (statisch gebunden):
    c.draw(); // Circle::draw
    r.draw(); // Rect::draw

    // 2) Aber über Basistyp passiert KEIN dynamischer Dispatch:
    const Shape& sc = c;
    sc.draw(); // -> Shape::draw (nicht Circle::draw!), weil NICHT virtual

    // 3) Damit der Client trotzdem korrekt arbeitet: manueller Dispatch
    printInfo_withoutPolymorphism(c);
    printInfo_withoutPolymorphism(r);

    /*
      KERN-NACHTEILE:
      - Client braucht switch(kind) und kennt alle Typen.
      - Neuer Typ (z.B. Triangle) => Änderung in printInfo_withoutPolymorphism (und ggf. überall).
      - Gefahr: Kind-Tag und echter Typ können auseinanderlaufen (dann ist der static_cast falsch).
      -> Vererbung ohne Polymorphie liefert hier kaum Nutzen, Sie bauen die Dynamik "per Hand".
    */
    return 0;
}
