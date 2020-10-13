#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int num, hour, min;
    char ch;
    while (N--)
    {
        int book[1001] = {0}, time[1001] = {0}, sumTime = {0}, count = 0;
        while (scanf("%d %c %d : %d", &num, &ch, &hour, &min))
        {
            if (num == 0)
            {
                break;
            }
            book[num]++;
            if (ch == 'S')
            {
                time[num] = hour * 60 + min;
            }
            else if (book[num] % 2 == 0 && ch == 'E')
            {
                count++;
                time[num] = hour * 60 + min - time[num];
                sumTime += time[num];
                time[num] = 0;
            }
        }
        if (count == 0)
        {
            cout << "0 0" << endl;
        }
        else
        {
            cout << count << " " << (int)(1.0 * sumTime / count + 0.5) << endl;
            count = 0;
            sumTime = 0;
        }
    }
    return 0;
}