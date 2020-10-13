#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int H;
    float res = 0;
    cin >> H;
    res = (H - 100) * 0.9 * 2;
    cout << fixed << setprecision(1) << res;
    return 0;
}