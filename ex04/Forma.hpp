#ifndef FORMA_HPP
#define FORMA_HPP

#include <iostream>

class Forma
{
public:
    Forma(unsigned int new_altura, unsigned int new_anchura) : altura(new_altura), anchura(new_anchura) {};
    virtual ~Forma() {};
    virtual double getArea() const = 0;
    unsigned int getAltura() const { return altura; };
    unsigned int getAnchura() const { return anchura; };

private:
    unsigned int altura;
    unsigned int anchura;
};

std::ostream &operator<<(std::ostream &os, const Forma *f)
{
    os << "Altura " << f->getAltura() << " Anchura " << f->getAnchura() << " Area " << f->getArea();
    return os;
}

#endif