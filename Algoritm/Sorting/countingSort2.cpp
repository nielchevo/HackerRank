#include <iostream>
#include <vector>

using namespace std;
#define MAX_ARR 4

vector<int> countingSort(vector<int> arr)
{   
    vector<int> countArr;
    vector<int> output;
    countArr.assign(MAX_ARR, 0);
    
    for(int i=0; i < arr.size(); i++)
    {
        int index = arr[i];
        countArr[index] += 1;
    }
    
    for(int i=0; i<MAX_ARR; i++)
    {
        while(countArr[i] != 0)
        {
            cout << i << " ";
            countArr[i] -= 1;
        }
    }

    return countArr;
}

int main()
{
    vector<int> mArray = {1, 1, 3, 2, 1};
    vector<int> result = countingSort(mArray);

    return 0;
}