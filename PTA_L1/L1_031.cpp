#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        float H, W;
        cin >> H >> W;
        if (10 * W <= 9 * ((H - 100) * 0.9 * 2))
            cout << "You are tai shou le!" << endl;
        else if (10 * W >= 11 * ((H - 100) * 0.9 * 2))
            cout << "You are tai pang le!" << endl;
        else
            cout << "You are wan mei!" << endl;
    }
    return 0;
}