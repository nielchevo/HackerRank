#include <iostream>
#include <map>

std::string twoString(std::string s1, std::string s2) 
{
    std::map<char, int> wordMap;

    for (int i=0; i<27; i++) 
    {
        wordMap.insert(std::make_pair(char(i+96), 0));
    };
    
    for (auto &i : wordMap)
    {
        if(s1.find(i.first) != std::string::npos)
         wordMap[i.first] = 1;
        
        if(s2.find(i.first) != std::string::npos)
            wordMap[i.first] += 1;

        if(wordMap[i.first] >= 2) {
            return "YES";
        }
    }

    return "NO";
}

/**
 * 
 * Complete the function twoStrings in the editor below. It should return a string, either YES or NO based on whether the strings share a common substring.
 * twoStrings has the following parameter(s):
 * s1, s2: two strings to analyze.
 * 
 * Sample Input
 * 2
 * hello
 * world
 * hi
 * world
 * Sample Output
 * YES
 * NO
 */

int main()
{
    std::cout << "hackerRank bubbble sort " << std::endl;

    std::string x = "wouldyoulikefries";
    // std::string x = "abcdd";
    std::string y = "abcabcabcabcabcabc";

    std::cout << twoString(x, y);

    return 0;
}