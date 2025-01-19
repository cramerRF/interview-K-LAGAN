#include "./Socio.hpp"

int main()
{
    Socio s1;
    Socio s2;
    Socio s3;
    Socio s4 = s3;

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;

    std::cout << "Ultimo numero: " << Socio::getUltimoNumero() << std::endl;

    return 0;
}