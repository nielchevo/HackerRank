#include<string.h>
#include<iostream>
#include<vector>

using namespace std;

vector<int>const countDuplicate(vector<int> arr)
{
    vector<int> temp;
    temp.assign(200000, 0);
    int min= 200000, max = 0;

    for(int i=0; i< arr.size(); i++)
    {
        int index = arr[i];
        temp[index] += 1;
        
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    for (int i = min ; i <= max; i++)
    {
        cout << temp[i] << ' ';
    }

    return temp;
}

int missingNumbers(vector<int> arr, vector<int> brr) {

    int n = arr.size();

    if(brr.size() > n)
        n = brr.size();
    
    vector<int> result1 = countDuplicate(arr);
    vector<int> result2 = countDuplicate(brr);

    for(int i=0; i<= n; i++){
        cout << "result1 : " << result1[i] << " result2 : " << result2[i] << endl;
    }

    return 0;
}
int main()
{
    int n = 10;
    vector<int> n1 = {203, 204, 205, 206, 207, 208, 203, 204, 205, 206};
        
    int z = 13;
    vector<int> z2 = {203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204};

    missingNumbers(n1, z2);

    return 0;
}