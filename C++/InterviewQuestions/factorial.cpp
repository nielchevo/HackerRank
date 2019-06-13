#include <iostream>

int factorial(int x)
{

}

int main ()
{
    int x=3, result = 1;
    for(int i=1; i<=x; i++)
    {
        result = result * i;
    }

    std::cout << result << std::endl;

    return 1;
}