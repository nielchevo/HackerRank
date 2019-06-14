#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> &arr, int lo, int hi, int key)
{
    int mid = lo + (hi-lo)/2; 
    printf("\nIndex: %d", mid);

    if(hi >= lo){
    
        if(arr[mid] == key)
        {
            return key;
        }    
        else if(arr[mid] > key)
        {
            binarySearch(arr, lo, mid-1, key);
        }
        else
        {
            binarySearch(arr, mid+1, hi, key);
        }
    }
    else
    {
        return -1;
    }
}

int main() {

    vector<int> arr = {2, 5, 1, 4, 10, 40, 30};
    
    sort(arr.begin(), arr.end());

    for(auto &x: arr)
    {   
        printf("[%d] ", x);
    }
    
    int result = binarySearch(arr, 0, arr.size(), 1);
    printf("\nResult: %d", result);

    return 0;
}