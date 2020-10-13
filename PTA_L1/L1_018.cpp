#include <iostream>
#include <string>
using namespace std;
int main()
{
    int hour, min, flag;
    string s;
    cin >> s;
    hour = (s[0] - '0') * 10 + s[1] - '0';
    min = (s[3] - '0') * 10 + s[4] - '0';
    flag = hour;
    if (min > 0)
    {
        flag = hour + 1;
    }
    if (flag > 12)
    {
        for (int i = 0; i < flag - 12; i++)
        {
            cout << "Dang";
        }
    }
    else
    {
        cout << "Only " << s << ".  Too early to Dang.";
    }
    return 0;
}