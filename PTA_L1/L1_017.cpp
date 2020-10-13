#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string s;
    cin >> s;
    float degree = 1, count = 0, num = 0;
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == '2')
        {
            num++;
        }
        count++;
    }
    if (s[0] == '-')
    {
        degree *= 1.5;
        count--;
    }
    if ((s[s.length() - 1] - '0') % 2 == 0)
    {
        degree *= 2;
    }
    degree *= num / count;
    cout << fixed << setprecision(2) << degree * 100 << "%";
    return 0;
}
