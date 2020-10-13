#include <iostream>
#include <vector>
using namespace std;
int a[100][100], b[100][100], res[100][100];
int main()
{
    int Ra, Ca, Rb, Cb;
    cin >> Ra >> Ca;
    for (int i = 0; i < Ra; i++)
    {
        for (int j = 0; j < Ca; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> Rb >> Cb;
    for (int i = 0; i < Rb; i++)
    {
        for (int j = 0; j < Cb; j++)
        {
            cin >> b[i][j];
        }
    }
    if (Ca != Rb)
    {
        cout << "Error: " << Ca << " != " << Rb;
    }
    else
    {
        for (int i = 0; i < Ra; i++)
        {
            for (int j = 0; j < Cb; j++)
            {
                for (int k = 0; k < Ca; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout << Ra << " " << Cb << endl;
        for (int i = 0; i < Ra; i++)
        {
            for (int j = 0; j < Cb; j++)
            {
                cout << res[i][j];
                if (j < Cb - 1)
                    cout << " ";
                else
                {
                    cout << endl;
                }
            }
        }
    }
    return 0;
}