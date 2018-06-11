#include <iostream>
#include <vector>
#include <string.h>

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
    do    
    {
        //do sort
        for(int i=0; i <= counter; i++)
        {
            if(checkString(arr[counter], arr[i]))
            {
                std::swap(arr[counter], arr[i]);
            }
        }
        counter++;
    }
    while(counter != (int)arr.size());
    
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