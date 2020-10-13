#include <iostream>
using namespace std;
int main()
{
    int n, m = 1, sum = 0;
    cin >> n;
    while (m < n)
    {
        m = m * 10 + 1;
        sum++;
    }
    while (1)
    {
        sum++;
        cout << m / n;
        if (m % n == 0)
        {
            cout << " " << sum << endl;
            break;
        }
        else
        {
            m %= n;
            m = m * 10 + 1;
        }
    }
    return 0;
}
