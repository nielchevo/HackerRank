#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>


using namespace std;


bool compareWordLength (string a, string b) { return (a.length() < b.length()); }

int findChainLength(string word, set<string> words, unordered_map<string,int> wordToLongestChain) {
    
}

int longestChain(vector<string> arr) {

    int maxChainLength =0;

    sort(arr.begin(), arr.end(), compareWordLength);

    unordered_set<string> word;

    for(auto word: arr)
    {
        if(maxChainLength > word.length()){
            continue;
        }
    }

    return maxChainLength;
}

int main() {
    vector<string> mInput = {"a", "b", "ba", "bca", "bda", "bdca"};

    int result = longestChain(mInput);

    printf("result : %d\n", result);

    return 0;
}