#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    long long a[num][3];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int count;
    cin >> count;
    int arr[count];
    for (int k = 0; k < count; k++)
    {
        cin >> arr[k];
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (arr[i] == a[j][1])
            {
                cout << a[j][0] << ' ' << a[j][2] << endl;
            }
        }
    }
    return 0;
}