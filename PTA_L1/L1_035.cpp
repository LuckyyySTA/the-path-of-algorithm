#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s1, s2;
    int count = 0;
    while (cin >> s && s != ".")
    {
        count++;
        if (count == 2)
        {
            s1 = s;
        }
        if (count == 14)
        {
            s2 = s;
        }
    }
    if (count >= 14)
    {
        cout << s1 << " and " << s2 << " are inviting you to dinner..." << endl;
    }
    else if (count >= 2)
    {
        cout << s1 << " is the only one for you..." << endl;
    }
    else
    {
        cout << "Momo... No one is for you ..." << endl;
    }
    return 0;
}