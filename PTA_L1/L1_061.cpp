#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float W, H, res;
    cin >> W >> H;
    res = W / (H * H);
    cout << fixed << setprecision(1) << res << endl;
    if (res > 25)
        cout << "PANG";
    else
        cout << "Hai Xing";
    return 0;
}