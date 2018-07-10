#include <iostream>
#include <vector>

using namespace std;

void checkPattern(string pattern, string input, int index, int next)
{   
  
}

void combineUtil(string input, string data, int begin, int end, int index, int r)
{
    if(index == r)
    {   //print stuff
        for(int i=0; i < r; i++)
        {
            cout << data[i];
        }
        cout << "\n";
        return;
    }
    else
    {
        for(int i=begin; i < end; i++)
        {   
            data.push_back(input[i]);
            combineUtil(input, data, i+1, end, index+1, r);
            data.pop_back();
        }
    }
}

 string removeDuplicate(string input, int strLength)
 {
    int index = input.length() - strLength;
    if(strLength != 0)
    {
        for(int i = index+1; i < input.length(); i++)
        {
            if(input[i] == input[index])
            {
                input.erase(input.begin() + i);
            }
        }
        removeDuplicate(input, strLength-1);
    }
    return input;
 }

int main() {
    //be
    std::string input = "beabeefeab";
    std::string data;
    int n = input.size();
    int r = 2;  // max count of combination

    string pattern = removeDuplicate(input, n);
    cout << input << endl;
    checkPattern("be", input, 0, 0);
    
    return 0;
}