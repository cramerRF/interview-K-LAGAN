#include <iostream>
#include "./Triangulo.hpp"
#include "./Rectangulo.hpp"

int main()
{
    Triangulo tr(3, 4);
    Rectangulo re(3, 4);

    std::cout << tr << std::endl;
    std::cout << re << std::endl;
    return 0;
}