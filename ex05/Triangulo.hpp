#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include "../ex04/Forma.hpp"

class Triangulo : public Forma
{
public:
    Triangulo(unsigned int new_altura, unsigned int new_anchura) : Forma(new_altura, new_anchura) {};
    ~Triangulo() {};
    double getArea() const
    {
        return getAltura() * getAnchura() / 2;
    };
};

std::ostream &operator<<(std::ostream &os, const Triangulo &tr)
{
    os << "Triangulo: " << (Forma *)&tr;
    return os;
}

#endif