#include <iostream>
using namespace std;
int main()
{
    int res = 1, num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        res = 2 * res;
    }
    cout << "2^" << num << " = " << res;
}