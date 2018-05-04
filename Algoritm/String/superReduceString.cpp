#include <bits/stdc++.h>
#include <iostream>

using namespace std;

std::string reduce(std::string text)
{
	for (int i = 1; i < text.length(); i++)
	{
		if (text[i] == text[i - 1])
		{
			text = text.substr(0, i - 1) + text.substr(i + 1);
            i = 0;
		}
	}

	if (text.length() == 0)
	{
		return "Empty String";
	}
	else
	{
		return text;
	}
}


int main() {
    string s;
    cin >> s;
    string result = reduce(s);
    cout << result << endl;
    return 0;
}
