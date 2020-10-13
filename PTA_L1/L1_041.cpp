#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    char a[10];
    int count = 0;
    while (~scanf("%s", a))
    {
        count++;
        if (a[0] == '2' && a[1] == '5' && a[2] == '0')
        {
            break;
        }
    }
    cout << count;
    return 0;
}