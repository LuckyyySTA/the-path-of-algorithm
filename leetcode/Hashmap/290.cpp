#include <iostream>
#include <string>
using namespace std;
int main()
{
    int M, num, flag = 0;
    cin >> M;
    while (M--)
    {
        cin >> num;
        for (int i = 1; i < 10; i++)
        {
            int mul = num * num * i;
            string s1 = to_string(num);
            string s2 = to_string(mul);
            string s3 = s2.substr(s2.length() - s1.length());
            if (s1 == s3)
            {
                flag = 1;
                cout << i << " " << mul << endl;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "No" << endl;
        }
    }
    return 0;
}