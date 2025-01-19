#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

#include "../ex04/Forma.hpp"

class Rectangulo : public Forma
{
public:
    Rectangulo(unsigned int new_altura, unsigned int new_anchura) : Forma(new_altura, new_anchura) {};
    ~Rectangulo() {};
    double getArea() const
    {
        return getAltura() * getAnchura();
    };
};

std::ostream &operator<<(std::ostream &os, const Rectangulo &re)
{
    os << "Rectangulo: " << (Forma *)&re;
    return os;
}

#endif