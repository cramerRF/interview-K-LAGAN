#include "./Socio.hpp"

std::ostream &operator<<(std::ostream &os, const Socio &socio)
{
    os << "Socio " << socio.numero;
    return os;
}

unsigned int Socio::ultimoNumero = 0;

unsigned int Socio::getUltimoNumero()
{
    return Socio::ultimoNumero;
}

Socio::Socio()
{
    this->numero = ++ultimoNumero;
}

Socio::~Socio()
{
}

Socio::Socio(const Socio &socio)
{
    *this = socio;
}

Socio &Socio::operator=(const Socio &socio)
{
    if (this == &socio)
    {
        return *this;
    }
    this->numero = socio.numero;
    return *this;
}