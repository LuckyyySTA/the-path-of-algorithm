#include <iostream>
using namespace std;
int main()
{
    int Pa, Pb;
    int count1 = 0, count0 = 0;
    cin >> Pa >> Pb;
    for (int i = 0; i < 3; i++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            count1++;
        }
        else
        {
            count0++;
        }
    }
    if (Pa > Pb && count0 > 0)
    {
        cout << "The winner is a: " << Pa << " + " << count0;
    }
    else
    {
        cout << "The winner is b: " << Pb << " + " << count1;
    }
    return 0;
}