#include <iostream>
#include <string>
using namespace std;
int main()
{
    int K, flag = 0;
    cin >> K;
    string s;
    while (cin >> s && s != "End")
    {
        if (flag == K)
        {
            cout << s << endl;
            flag = 0;
        }
        else
        {
            if (s == "ChuiZi")
            {
                cout << "Bu" << endl;
            }
            else if (s == "JianDao")
            {
                cout << "ChuiZi" << endl;
            }
            else if (s == "Bu")
            {
                cout << "JianDao" << endl;
            }
            flag++;
        }
    }
}