#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        long long num;
        cin >> num;
        if (num == 0 || num == 1)
        {
            cout << "No" << endl;
            continue;
        }
        bool flag = true;
        for (int j = 2; j <= sqrt(num); j++)
        {
            if (num % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}