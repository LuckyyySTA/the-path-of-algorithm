#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        if ((a < 15 || a > 20) || ((b < 50) || (b > 70)))
            cout << s << endl;
    }

    return 0;
}