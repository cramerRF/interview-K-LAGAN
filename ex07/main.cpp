#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "../ex06/Cuadrado.hpp"
#include "../ex05/Rectangulo.hpp"
#include "../ex05/Triangulo.hpp"

int main()
{
    srand((unsigned)time(NULL));

    int number_triangles = rand() % 10 + 1;
    int number_rectangles = rand() % 10 + 1;
    int number_squares = rand() % 10 + 1;

    Forma *formas[number_triangles + number_rectangles + number_squares];

    std::cout << "Number of triangles: " << number_triangles << std::endl;
    for (int i = 0; i < number_triangles; i++)
    {
        formas[i] = new Triangulo(rand() % 10 + 1, rand() % 10 + 1);
        std::cout << "Forma " << i << "\n"
                  << formas[i] << std::endl;
    }

    std::cout << "Number of rectangles: " << number_rectangles << std::endl;
    for (int i = number_triangles; i < number_triangles + number_rectangles; i++)
    {
        formas[i] = new Rectangulo(rand() % 10 + 1, rand() % 10 + 1);
        std::cout << "Forma " << i << "\n"
                  << formas[i] << std::endl;
    }
    std::cout << "Number of squares: " << number_squares << std::endl;
    for (int i = number_triangles + number_rectangles; i < number_triangles + number_rectangles + number_squares; i++)
    {
        formas[i] = new Cuadrado(rand() % 10 + 1);
        std::cout << "Forma " << i << "\n"
                  << formas[i] << std::endl;
    }
    std::cout << "Solution" << std::endl;

    for (int i = 0; i < number_triangles + number_rectangles + number_squares; i++)
        std::cout << "Forma " << i << " area = " << formas[i]->getArea() << std::endl;
}