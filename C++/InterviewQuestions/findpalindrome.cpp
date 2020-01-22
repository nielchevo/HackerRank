#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

void findPalindrome(string str, int lo, int hi, std::vector<string> &set) 
{
    while (lo >= 0 && hi < str.length()
            && str.at(lo) == str.at(hi))
    {
        // push all palindromes into the set
        set.push_back(str.substr(lo, hi - lo + 1));

        // expand in both directions
        lo--, lo++;
    }
}

int palindrome(string s) {

    std::vector<string> set;

    for (int i = 0; i < s.length(); i++)
    {
        // find odd palindrome 
        findPalindrome(s, i, i, set);
        
       //find even palindrome
        findPalindrome(s, i, i + 1, set);
    }
    
    return set.size();
}

// main function
int main()
{
	string str = "aabaaa";

    int result = palindrome(str);
	printf("%d", result);

	return 0;
}