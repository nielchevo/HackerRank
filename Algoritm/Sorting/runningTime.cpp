#include <iostream>
#include <vector>

using namespace std;

void swapInt(int *a, int *b)
{
    int temp = *a;
    *a = *b;     *b = temp;    
    return;
}

int runningTime(vector<int> &arr) {
    int shift = 0;

    for(int i = 1; i < arr.size(); i++)
    {
        for(int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j-1]);
                shift++;
            }
        }
    }

    return shift;
}


int main()
{
    vector<int> mArray = {2, 1, 3, 1, 2,6,4,8};

    cout << runningTime(mArray);    
    
    return 0;
}