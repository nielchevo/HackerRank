#include<string>
#include<iostream>

using namespace std;


string caesarChiper(string key, int n)
{
    string temp = "";

    for (int i=0;i<key.length();i++)
    {
        
        if ( ((int)key[i] >= 97 && (int)key[i] <= 122) ||
             ((int)key[i] >= 65 && (int)key[i] <= 90)
            )
        {
            cout << "char : " << key[i] << " i : " << (int)key[i] << '\n';
            if(isupper(key[i]))
                temp += char(int(key[i]+n -65)%26 +65);
            else
                temp += char(int(key[i]+n -97)%26 +97);
        }
        else
        {
            cout << "char : " << key[i] << " i : " << (int)key[i] << '\n';
            temp += key[i];
        }
    }
    return temp;
}

int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string encrypted = "Hello_World!";
    int rotate;

    string result = caesarChiper(encrypted, 4);
    
    cout << result ;

    // //test print char in int  
    // for (int i =0; i<= 256; i++)
    // {
    //     cout << "char : " << char(i) << " i : " << i << "\n";
    // }
}