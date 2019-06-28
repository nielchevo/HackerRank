#include <iostream>
#include <vector>
#include <unordered_map>

/**https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem */
using namespace std;

struct record 
{
    int counter = 0;
    int currentScore = 0;
} high, low;

vector<int> breakingRecord(vector<int> scores) {

    // Assign first scores
    high.currentScore = scores.front();
    low.currentScore = scores.front();
    
    // Atart at i = 1, since we want to count high and low after first attempt.
    for(int i=1 ;i < scores.size(); i++)
    {
        if(scores.at(i) > high.currentScore)
        {
            high.currentScore = scores.at(i);
            high.counter += 1;
        }

        if(scores.at(i) < low.currentScore)
        {
            low.currentScore = scores.at(i);
            low.counter += 1;
        }
    }

    return {high.counter, low.counter};
}

int main() {


    vector<int> input1 = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
    // vector<int> input2 ={ 10, 5, 20, 20, 4, 5, 2, 25, 1};
    
    for(auto &x : breakingRecord(input1))
    {
        cout << x << endl;
    }

    return 0;
}