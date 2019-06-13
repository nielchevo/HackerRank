#include <iostream>
#include <stdio.h>
#include <bitset>

void bitConvert(unsigned n)
{
    if(n > 1)
        bitConvert(n / 2);
    
    std::cout << (n % 2);
}

int main() 
{
    bitConvert(3);
    

    return 0;
}