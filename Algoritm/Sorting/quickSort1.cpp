#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> &bar)
{
    for(auto n: bar)
    {
        cout << n << " ";
    }
    cout << "\n";
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
       
    }
    swap(arr[i+1], arr[high]);

    return (i+1);
}

void quickSort(vector<int> &arr, int low, int high)
{   
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low , pi - 1);
        quickSort(arr, pi+1, high);
    }
    
    print(arr);
}

int main()
{
    vector<int> mArray = {4, 5, 3, 7, 2};

    quickSort(mArray, 0, mArray.size()-1);
    return 0;
}