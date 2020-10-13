#include <iostream>
#include <map>
using namespace std;
int main()
{
    int N;
    map<int, int> mp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            int id;
            cin >> id;
            if (mp[id] != 0)
            {
                continue;
            }
            mp[id] = num;
        }
    }
    int M, flag = 0;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int searchID;
        cin >> searchID;
        if (mp.count(searchID) == 0 || mp[searchID] == 1)
        {
            if (flag++ != 0)
                cout << ' ';
            printf("%05d", searchID);
        }
        mp[searchID] = -1;
    }
    if (!flag)
    {
        cout << "No one is handsome";
    }
    return 0;
}