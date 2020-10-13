#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int num[10] = {-1};
    map<int, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[i] == 0)
        {
            mp[i] = s[i];
        }
    }
    return 0;
}