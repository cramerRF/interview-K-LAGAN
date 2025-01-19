#ifndef CUADRADO_HPP
#define CUADRADO_HPP

#include "../ex05/Rectangulo.hpp"

class Cuadrado : public Rectangulo
{
public:
    Cuadrado(unsigned int new_lado) : Rectangulo(new_lado, new_lado) {};
};

std::ostream &operator<<(std::ostream &os, const Cuadrado &re)
{
    os << "Cuadrado: " << (Forma *)&re;
    return os;
}

#endif