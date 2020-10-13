#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long num, temp;
    cin >> num;
    int start = 0, count = 0, max = 0;
    for (int i = 2; i < sqrt(num); i++)
    {
        count = 0;
        temp = num;
        int j = i;
        while (temp % j == 0)
        {
            temp /= j;
            j++;
            count++;
        }
        if (count > max)
        {
            max = count;
            start = i;
        }
    }
    if (max)
    {
        cout << max << endl;
        for (int i = 0; i < max; i++)
        {
            cout << start + i;
            if (i != max - 1)
            {
                cout << "*";
            }
        }
    }
    else
    {
        cout << 1 << endl;
        cout << num << endl;
    }
    return 0;
}