#include<string.h>
#include<iostream>
#include<vector>

using namespace std;

static int diffMax = 100;

// for sake of learning, im not using std max lib :(
int getMax(vector<int> arr)
{ 
    int max = 0;
    for(int i = 0; i < arr.size(); i++)
    {   
        if(max < arr[i])
            max = arr[i];
    }

    return max;
}

vector<int> countDuplicate(vector<int> arr)
{
    vector<int> temp;
    temp.assign(200000, 0);

    for(int i=0; i< arr.size(); i++)
    {
        int index = arr[i];
        temp[index] += 1;
    }

    return temp;
}

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    
    vector<int> temp;
    vector<int> result1 = countDuplicate(arr);
    vector<int> result2 = countDuplicate(brr);
    int max = getMax(brr);
    
    for(int i=max-100; i<= max; i++){

        if((result1[i] ^ result2[i]) != 0) // filter duplicate 
        {
            temp.push_back(i);
        }
    }
    
    return temp;
}

int main()
{
    int n = 10;
    vector<int> n1 = {203, 204, 205, 206, 207, 208, 203, 204, 205, 206};
        
    int z = 13;
    vector<int> z2 = {203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204};

    vector<int> result = missingNumbers(n1, z2);

    for (int i = 0; i < result.size(); i++) 
    {
        cout << result[i] << ' ';
    }
    return 0;
}