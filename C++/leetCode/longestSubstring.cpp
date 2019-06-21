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

// linear solution
int lengthOfLongestSubstring(string s) 
{
    unordered_map<char, int> map;
    int index=0; 
    int lengthResult =0;

    for(int i=0; i<s.length();i++) 
    {
        if(map.count(s[i]))
        {
            //calculate distance from duplicate char.
            int distanceFromDupe = i - map[s[i]];

            // calculate duplicate from starting index now.
            int distanceFromIndex = i - index;

            printf("%d = %d - %d | %d = i - %d\n", distanceFromDupe, i, map[s[i]], distanceFromIndex, index);    
            
            //set current start point after found the duplicate char.
            index = i;

            if(max(distanceFromDupe, distanceFromIndex) > lengthResult)
            {
                lengthResult = max(distanceFromDupe, distanceFromIndex);
            }
        }

        map[s[i]] = i;
    }

    return lengthResult;
}

int main() 
{
    string input = "abcabcbb";
    string input2= "bbbbb";
    string input3= "pwwkew";
    string custom= "abcaxztvz";

    cout << lengthOfLongestSubstring(input3);

    return 0;
}
