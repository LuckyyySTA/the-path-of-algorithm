#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int num[10] = {0};
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = '0'; j <= '9'; j++)
        {
            if (s[i] == j)
            {
                int n = j - '0';
                num[n]++;
            }
        }
    }
    for (int k = 0; k < 10; k++)
    {
        if (num[k] != 0)
        {
            cout << k << ':' << num[k] << endl;
        }
    }
    return 0;
}