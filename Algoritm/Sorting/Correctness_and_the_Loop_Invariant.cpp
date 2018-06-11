#include <iostream>
#include <vector>

void insertionSort2(int n,  std::vector<int> &arr)
{
    int i,j;
    int value;
    for(i=1;i<n;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j]) //use '>=' instead '>'
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
    }
    for(j=0;j<n;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}

int main()
{   
    std::vector<int> nArray = {7, 4, 3, 5, 6, 2}; //example input

    insertionSort2(nArray.size(), nArray);

    return 0;
}