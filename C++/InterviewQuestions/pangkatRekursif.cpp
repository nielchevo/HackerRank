#include <iostream>

int tanpaRekursif(int x, int y) {
    int result = 1;

    do
    {
        result = result * x;
        y--;
    }
    while (y > 0);

    return result;
}

int pangkat(int x, int y) {
    if(y == 0) {
        return 1;
    }

    return x * pangkat(x,y-1);
}

int main () {

    /* find power of number (pangkat) w & w/o recursive.
        pangkat(2,3)
        output 2*2*2 = 8
    */
     
    std::cout << "rekursif :" << pangkat(2,3) << std::endl;
    std::cout << "non-rekursiv: " << tanpaRekursif(2,3) << std::endl;

    return 0;
}