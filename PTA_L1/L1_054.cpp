#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    char ch;
    int N;
    cin >> ch >> N;
    getchar();
    vector<string> v;
    for (int i = 0; i < N; i++)
    {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    bool flag = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (v[i][j] == v[N - 1 - i][N - 1 - j])
            {
                continue;
            }
            else
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "bu yong dao le" << endl;
    }
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = N - 1; j >= 0; j--)
        {
            if (v[i][j] == '@')
                cout << ch;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}