#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int sumA = 0, sumB = 0, flagA = 0, flagB = 0;
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            for (unsigned int j = 0; j <= i - 1; j++)
            {
                if (s[j] < '0' || s[j] > '9')
                {
                    flagA = 1;
                    break;
                }
                else
                {
                    sumA = sumA * 10 + (s[j] - '0');
                }
                if (i == 0)
                {
                    flagA = 1;
                    break;
                }
            }
            if (sumA > 1000 || sumA == 0)
                flagA = 1;
            for (unsigned int j = i + 1; j < s.length(); j++)
            {
                if (s[j] < '0' || s[j] > '9')
                {
                    flagB = 1;
                    break;
                }
                else
                {
                    sumB = sumB * 10 + (s[j] - '0');
                }
            }
            if (sumB > 1000 || sumB == 0)
            {
                flagB = 1;
            }
            break;
        }
    }
    if (!flagA && !flagB)
    {
        cout << sumA << " + " << sumB << " = " << sumA + sumB;
    }
    else if (flagA && !flagB)
    {
        cout << "? + " << sumB << " = ?";
    }
    else if (!flagA && flagB)
    {
        cout << sumA << " + ? = ?";
    }
    else if (flagA && flagB)
    {
        cout << "? + ? = ?";
    }
    return 0;
}