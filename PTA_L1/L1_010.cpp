#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int large, small;
    large = max(a, b);
    small = min(a, b);
    if (c >= large)
    {
        cout << small << "->" << large << "->" << c;
    }
    else if (c < large)
    {
        if (small < c)
        {
            cout << small << "->" << c << "->" << large;
        }
        else if (small >= c)
        {
            cout << c << "->" << small << "->" << large;
        }
    }
    return 0;
}