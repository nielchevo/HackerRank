#include <iostream>
#include <vector>
#include <unordered_set>
#include <iterator>

using namespace std;

int alternate(string s) {
    
    unordered_set<char> ss; 
    for (char c : s) {
        cout << "charmap : " << c << endl; 
        ss.insert(c);   
    }
    
    std::copy(ss.begin(), ss.end(), std::ostream_iterator<char>(std::cout, " "));

    int max = 0;
    unordered_set<char>::iterator itr; 
    for (itr = ss.begin(); itr != ss.end(); itr++) {
        for (unordered_set<char>::iterator itr2 = next(itr, 1); itr2 != ss.end(); itr2++) {
            int locallen = 0;
            char a = ' ';
            //cout << "1: " << *itr << ", 2: " << *itr2 << endl;
            for (int x = 0; x < s.length(); x++) {                
                if (s[x] == (*itr) || s[x] == (*itr2)) {
                    if (a == ' '){
                        //cout << s[x];
                        a = s[x];
                        locallen++;
                    }
                    else {
                        if (s[x] != a) {
                            locallen++;
                            a = s[x];
                            //cout << s[x];
                        } else { //invalid string
                            //cout << s[x] << "-break";
                            locallen = 0;
                            break;
                        }                            
                    }
                }
            }
            //cout << " -- " << locallen << endl;
            if (max < locallen)
                max = locallen;
        }        
    }
    return max;
}

int main() {
    //be
    std::string input = "beabeefeab";
    
    int result = alternate(input);
    cout << result << endl;

    system("pause");
    return 0;
}