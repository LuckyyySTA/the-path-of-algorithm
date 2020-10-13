#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int num, H, W;
        cin >> num >> H >> W;
        if (num == 1)
        {
            if (H < 130)
            {
                cout << "duo chi yu! ";
            }
            else if (H > 130)
            {
                cout << "ni li hai! ";
            }
            else
            {
                cout << "wan mei! ";
            }
            if (W < 27)
            {
                cout << "duo chi rou!";
            }
            else if (W > 27)
            {
                cout << "shao chi rou!";
            }
            else
            {
                cout << "wan mei!";
            }
        }
        else
        {
            if (H < 129)
            {
                cout << "duo chi yu! ";
            }
            else if (H > 129)
            {
                cout << "ni li hai! ";
            }
            else
            {
                cout << " wan mei! ";
            }
            if (W < 25)
            {
                cout << "duo chi rou!";
            }
            else if (W > 25)
            {
                cout << "shao chi rou!";
            }
            else
            {
                cout << "wan mei!";
            }
        }
        if (N != 0)
        {
            cout << endl;
        }
    }
    return 0;
}