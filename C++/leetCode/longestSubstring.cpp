#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

/*
    Given a string, find the length of the longest substring without repeating characters. 

    Example 1:

    Input: "abcabcbb"
    Output: 3 
    Explanation: The answer is "abc", with the length of 3. 

    Example 2:

    Input: "bbbbb"
    Output: 1
    Explanation: The answer is "b", with the length of 1.

    Example 3:

    Input: "pwwkew"
    Output: 3
    Explanation: The answer is "wke", with the length of 3.
    Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

int lengthOfLongestSubstring(string s) 
{
    unordered_map<char, int> map;
    
    int marker = 0; int maxresult = 0; 

    for(int i=0; i<s.length();i++) 
    {
        if(map.count(s[i]))
        {
            marker = i - map[s[i]];
            int distance = i - marker;

            printf("marker: %i distance: %i = i: %i\ - dupe pos %i \n", marker, distance, i, map[s[i]]);
            if(distance >= maxresult)
                maxresult = distance;
        }

        map[s[i]] = i;
    }
    
    for(const auto &x :map)
    {
        printf("map : %c : %i\n",x.first, x.second); 
    }

    return maxresult;
}

int main() 
{
    string input = "abcabcbb";
    string input2= "bbbbb";
    string input3= "pwwkew";
    string custom= "abcaxztvz";

    cout << lengthOfLongestSubstring(input);

    return 0;
}
