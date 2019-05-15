#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>

using namespace std;

#define MAX_COUNT 10

void fullCountingSort(vector<vector<string>> Arr) {

    vector<int> m_count;

    m_count.assign(MAX_COUNT, 0);
    map<int, vector<string>> mMap;

    // apply rule half of Arr change into dash '-'
    for (int i=0; i < Arr.size()/2; i++) {
        for (int j=1; j<Arr[i].size(); j++) {
            Arr[i][j] = '-';
        } 
    }

    // iterate and store in a ordered map so we can skip sort.
    for(int i=0; i< Arr.size(); i++){
        //for(int j=0; j<s[i].size(); j++) 
        {
            int key = atoi(s[i][0].c_str());
            string value = s[i][1];

            mMap[key].push_back(value);
        }
    }

    // print to outu
    for(auto x : mMap)
    {
        vector<string> temp;

        temp = x.second;

        for(auto s: temp)
        {
            printf("%s ", s.c_str());
        }
    } 
}

#define MAX_COUNT 10
int main() {

    vector<vector<string>> Arr = { {"0", "bc"}, {"0", "ae"},{"5", "bc"},{"4", "bc"}, {"1", "To"}, {"1", "BE"}, {"2", "Continue"}, {"3", "Here"}};

    fullCountingSort(Arr);

    return 0;
}