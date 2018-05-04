#include <bits/stdc++.h>
using namespace std;

std::string printVector(std::vector<int> &element)
{
    for (int i =0; i < element.size(); i++)
    {
        std::cout << element[i] << " ";
    }
    return "";
}

void insertionSort1(int n, vector <int> arr) {
    // Complete this function
    int key = arr.back(); // key for insertion
    n = arr.size()-1;   
    bool sorted = false;
    
    while (sorted != true)
    {
        if(key > arr[n-1])
        {
            arr[n] = key;
            std::cout << printVector(arr) << std::endl;
            sorted = true;
        }
        else
        {
            arr[n] = arr[n-1];
            std::cout << printVector(arr) << std::endl;
        }
        n--;
    }
} 

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort1(n, arr);
    return 0;
}
