#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int weight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    string s;
    vector<string> v;
    int sum = 0, flag = 0;
    while (N--)
    {
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < 17; j++)
        {
            sum += (v[i][j] - '0') * weight[j];
        }
        if (M[sum % 11] != v[i][17])
        {
            flag++;
            cout << v[i] << endl;
        }
        sum = 0;
    }
    if (flag == 0)
    {
        cout << "All passed";
    }
    return 0;
}