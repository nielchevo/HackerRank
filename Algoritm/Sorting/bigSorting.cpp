#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

bool checkString(std::string &s1, std::string &s2)
{
    if( s1.length() < s2.length() || 
        s1.length() == s2.length() && s1 < s2)
    {
        return true;
    }
    return false;
}

void bigSorting (std::vector<std::string> &arr)
{
    int counter = 1;
    std::sort(arr.begin(), arr.end(), checkString);
    
    for(auto &n : arr)
    {
      std::cout << n << " ";
    }
}

int main()
{
    std::vector<std::string> m_Array = {"31415926535897932384626433832795", "2", "1", "21", "22","8"};

    bigSorting(m_Array);
  
    return 0;
}