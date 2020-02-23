#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>


void checkMagazine(std::vector<std::string> magazine, std::vector<std::string> note)
{
    // register note
    std::unordered_map<std::string, int> hNote;
    int z = 0;
    for (auto &it: note)
    {
        hNote[it] += 1;
        z++;
    }
 
    for (auto &x: magazine) {
        if(hNote.count(x) == 1 && hNote[x] > 0) {    
            hNote[x] -= 1;    
            z--;
        }
    }

    if(z != 0) {
        std::cout << "No";
    } else {
        std::cout << "Yes";
    }
}

int main() 
{

    // std::vector<std::string> x {"ive", "got", "a", "lovely", "bunch", "of", "coconuts"};
    // std::vector<std::string> y {"ive","got","some", "coconuts"};

    std::vector<std::string> x {"two", "times", "three", "is", "not", "four"};
    std::vector<std::string> y {"two", "times", "two", "is","four"};

    checkMagazine(x, y);

    return 0;
}
