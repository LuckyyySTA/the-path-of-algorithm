#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> number;
    vector<string> v;
    for (int i = 0; i < N; i++)
    {
        int num;
        string name;
        cin >> num >> name;
        number.push_back(num);
        v.push_back(name);
    }
    for (int i = 0; i < N / 2; i++)
    {
        for (int j = N - 1; j >= N / 2; j--)
        {
            if (number[i] != number[j] && number[j] != -1)
            {
                cout << v[i] << " " << v[j] << endl;
                number[j] = -1;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}