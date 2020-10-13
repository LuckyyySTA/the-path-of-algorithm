#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int res = 0;
    vector<int> v;
    vector<string> n;
    for (int i = 0; i < N; i++)
    {
        string name;
        int num;
        cin >> name >> num;
        v.push_back(num);
        n.push_back(name);
        res += num;
    }
    res = res / (2 * N);
    int minus = res - v[0];
    int min = abs(minus);
    int index = 0;
    for (int i = 1; i < N; i++)
    {
        minus = res - v[i];
        if (min > abs(minus))
        {
            min = abs(minus);
            index = i;
        }
    }
    cout << res << " " << n[index];
    return 0;
}