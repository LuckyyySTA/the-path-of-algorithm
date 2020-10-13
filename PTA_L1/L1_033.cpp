#include <iostream>
#include <string>
using namespace std;
int judge(int num);
int main()
{
    int year, n;
    cin >> year >> n;
    for (int i = year; i <= 3000; i++)
    {
        if (judge(i) == n)
        {
            printf("%d %04d", i - year, i);
            break;
        }
    }
    return 0;
}
int judge(int num)
{
    int arr[10] = {0}, count = 0;
    for (int i = 0; i < 4; i++)
    {
        arr[num % 10] = 1;
        num = num / 10;
    }
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] != 0)
            count++;
    }
    return count;
}