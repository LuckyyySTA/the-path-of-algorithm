#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, line;
    char ch;
    cin >> num >> ch;
    line = sqrt((num + 1) / 2);
    for (int i = line; i > 0; i--)
    {
        for (int j = 0; j < line - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << ch;
        }
        cout << endl;
    }
    for (int i = 2; i <= line; i++)
    {
        for (int j = 0; j < line - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << ch;
        }
        cout << endl;
    }
    cout << num - (2 * line * line - 1) << endl;
}