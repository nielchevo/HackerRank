#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

/*Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]. */

/*solution: 
1. create a map of numbers that we need to fulfil target.
2. substract target with current number array
3. seek trought map we have and return 
*/

vector<int> twoSums(vector<int>& nums, int target)
{
    unordered_map<int, int> temp;
    
    for (int i = 0; i < nums.size(); i++) {
        
        temp[nums[i]] = i;

        int b = target - nums[i];        

        if(temp.count(b)) 
        {
            return {i, temp[b]};
        }
    }

    // for(const auto  &z: temp){
    //     cout << z.first << endl;
    // }

    return {};
}

int main () {

    vector<int> num = {2, 7, 11, 15};
    
    // print result
    for(auto &x: twoSums(num, 13))
    {
        cout << x << endl;
    }

    return 0;
}