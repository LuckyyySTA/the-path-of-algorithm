#include <iostream>
#include <string>
using namespace std;
int a[256];
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for (int j = 0; j < s2.length(); j++)
    {
        a[s2[j] - 0]++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (a[s1[i] - 0] > 0)
        {
            continue;
        }
        else
        {
            cout << s1[i];
        }
    }
    return 0;
}