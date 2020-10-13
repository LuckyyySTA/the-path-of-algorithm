#include <iostream>
#include <string>
using namespace std;
int main()
{
    string num[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    string s;
    cin >> s;
    int count = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[0] == '-' && count == 1)
        {
            cout << "fu ";
            count--;
        }
        for (char j = '0'; j <= '9'; j++)
        {
            if (s[i] == j)
            {
                cout << num[j - '0'];
                if (i < s.length() - 1)
                {
                    cout << ' ';
                }
            }
        }
    }
    return 0;
}