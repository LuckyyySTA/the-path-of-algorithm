#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    float res = 5000;
    res = res - x * y / 2 - (100 - y) * (100 - x) / 2 - (100 - x) * y;
    cout << res;
    return 0;
}