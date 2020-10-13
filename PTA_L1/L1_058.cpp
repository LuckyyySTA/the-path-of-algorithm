#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int num = 0;
    vector<char> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '6')
        {
            num++;
        }
        if (s[i] != '6' || i == s.length() - 1)
        {
            if (num > 9)
            {
                v.push_back('2');
                v.push_back('7');
            }
            else if (num > 3)
            {
                v.push_back('9');
            }
            else if (num > 0)
            {
                for (int i = 0; i < num; i++)
                {
                    v.push_back('6');
                }
            }
            if (s[i] != '6')
            {
                v.push_back(s[i]);
            }
            num = 0;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    return 0;
}