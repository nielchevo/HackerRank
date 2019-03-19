#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(std::vector<int> arr)
{
    for(auto it = arr.cbegin(); it != arr.cend(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

vector<int> quickSort(vector <int> &arr, int size) 
{
    //test unit input-output
    // 4 5 3 7 2
    // 3 4 5 7 2
    // 3 4 5 7 2
    // 2 3 4 5 7
    // finale :
    // 2 3 4 5 7

    int key = arr[0];
    int pivot = 0; // get middle pivot/ equality 

    for(int i=1; i < size; i++)
    {
        if( key > arr[i])
        {
            pivot++;
            for (int j = i; j > 0; j--)
            {
                swap(arr[j], arr[j-1]);
            }
        }
        print(arr);
    }

    return arr;
}

int main ()
{
    std::vector<int> m_arry = {4, 5, 3, 7, 2};
 
    vector<int> test = partition(m_arry, m_arry.size());

    return 0;
}

