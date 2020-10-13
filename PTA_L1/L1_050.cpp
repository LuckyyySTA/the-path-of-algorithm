#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int L, N, n;
    cin >> L >> N;
    vector<char> v;
    n = pow(26, L) - N;
    for (int j = 0; j < L; j++)
    {
        char temp = n % 26 + 'a';
        v.push_back(temp);
        n /= 26;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
}