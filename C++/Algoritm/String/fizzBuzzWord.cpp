#include <iostream>
#include <stdio.h>
#include <string>

std::string fizzBuzz(int i) {
    
    if(i % 3 == 0 && i % 5 == 0) {
        return "fizzBuzz";
    }
    else if ( i % 3 == 0) {
        return "fizz";
    } 
    else if( i % 5 == 0) {
        return "Buzz";
    }
    else {
        return "";
    }
}

int main() {
    int n = 100;

    for( int i=0; i < n; i++) {
        printf("%d-> %s\n", i, fizzBuzz(i).c_str());
    }
}