#include <iostream>

int GetOneBits(unsigned int number)
{
    int ret = 0;
    while (number)
    {
        if (number & 1)
            ret++;
        number = number >> 1;
    }
    return ret;
}

void test(unsigned int number, int expected)
{
    static int i = 1;
    int result = GetOneBits(number);

    std::cout << std::endl
              << "Test " << i++ << std::endl;
    if (result == expected)
        std::cout << "Test OK" << std::endl;
    else
    {
        std::cout << "Number: " << number << std::endl;
        std::cout << "Expected: " << expected << std::endl;
        std::cout << "Got: " << result << std::endl;
        std::cout << "Test failed--------------------------------------" << std::endl;
    }
}

int main()
{
    for (unsigned int i = 1; i < sizeof(unsigned int); i++)
        test(1 << i, 1);
    test(0, 0);
    test(-1, 32);
    test(0xFFFFFFFF, 32);
    test(0xAAAAAAAA, 16);
    return 0;
}