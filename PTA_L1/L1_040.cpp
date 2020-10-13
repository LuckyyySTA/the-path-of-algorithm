#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        char ch;
        float H;
        cin >> ch >> H;
        if (ch == 'M')
        {
            cout << fixed << setprecision(2) << float(H / 1.09) << endl;
        }
        else
        {
            cout << fixed << setprecision(2) << float(H * 1.09) << endl;
        }
    }
    return 0;
}