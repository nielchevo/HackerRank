#include <stdio.h>
#include <iostream>
#include <vector>

void insertionSort2(int n,  std::vector<int> &arr)
{
    int counter=1;

    do
    {
        for(int i=0; i<counter;i++)
        {
            if(arr[counter] < arr[i])
            {
                std::swap(arr[i],arr[counter]);
            }
        }

        for(int i=0; i<n; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        counter++;
    }
    while(counter != n);
}

int main(){
    
    std::vector<int> narr = {1,4,3,5,6,2}; // example input
    // expected output 
    // 1 4 3 5 6 2
    // 1 3 4 5 6 2
    // 1 3 4 5 6 2
    // 1 3 4 5 6 2
    // 1 2 3 4 5 6
    
    insertionSort2(narr.size(), narr); 

    return 0;    
} 