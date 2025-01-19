#ifndef SOCIO_HPP
#define SOCIO_HPP

#include <iostream>

class Socio
{
public:
    static unsigned int getUltimoNumero();

    Socio();
    ~Socio();
    Socio(const Socio &socio);
    Socio &operator=(const Socio &socio);
    unsigned int numero;

private:
    static unsigned int ultimoNumero;
};

std::ostream &operator<<(std::ostream &os, const Socio &socio);

#endif