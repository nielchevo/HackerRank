#include <bits/stdc++.h>

using namespace std;

int countUpperCase(std::string text)
{
	std::locale loc;
	int count = 1;
	for (int i = 0; i < text.size(); i++)
	{
		if (std::isupper(text[i], loc))
		{
			count++;
		}
	}

	return count;
}

int main() {
    string s;
    cin >> s;
    int result = countUpperCase(s);
    cout << result << endl;
    return 0;
}
