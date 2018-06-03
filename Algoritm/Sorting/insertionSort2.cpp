#include <stdio.h>
#include <iostream>
#include <vector>

void insertionSort2(int n,  std::vector<int> &array)
{
    int counter=1;

    do
    {
        std::cout << "\nCounter: "<< counter << std::endl; 
        
        for(int i=0; i<counter;i++)
        {
            std::cout << "check: "<< array[i] <<" lower than "<< array[counter] << std::endl;
            if(array[counter] < array[i])
            {
                std::cout << "swap " << array[i]  << " and " << array[counter] << std::endl;
                std::swap(array[i],array[counter]);
            }
        }

        for(int i=0; i<n; i++)
        {
            std::cout << "[" << array[i] << "] ";
        }

        counter++;
    }
    while(counter != n);
}

int main(){
    
    std::vector<int> nArray = {1,4,7,9,3,5,6,10,22};
   
    insertionSort2(nArray.size(), nArray); 

    return 0;    
} 