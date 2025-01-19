#include <iostream>

class Bombilla
{
public:
    bool encendida = false;

    int GetTemperatura()
    {
        if (encendida)
        {
            return 100;
        }
        else
        {
            return 0;
        }
    }
};

void EncenderBombilla(Bombilla &bombilla)
{
    bombilla.encendida = true;
}

int main(void)
{
    Bombilla bombilla;

    std::cout << "Temperatura: " << bombilla.GetTemperatura() << std::endl;
    std::cout << "Encendiendo bombilla..." << std::endl;
    EncenderBombilla(bombilla);
    std::cout << "Temperatura: " << bombilla.GetTemperatura() << std::endl;

    return 0;
}