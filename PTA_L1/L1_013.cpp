#include <iostream>
using namespace std;
int main()
{
    int N, res = 0, temp = 1;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        temp = temp * i;
        res += temp;
    }
    cout << res;
}
