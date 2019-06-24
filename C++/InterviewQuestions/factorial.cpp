#include <iostream>

int factorial(int x)
{
    int result = 1;
    for(int i=1; i<=x; i++)
    {
        result = result * i;
    }
    return result;
}

int main ()
{
    int input = 5;
    std::cout << factorial(input) << std::endl;

    return 1;
}