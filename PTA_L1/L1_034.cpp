#include <iostream>
using namespace std;
int arr[10000] = {0};
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int num;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            int F;
            cin >> F;
            arr[F]++;
        }
    }
    int max = arr[0], index;
    for (int i = 0; i < 10000; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            index = i;
        }
    }
    cout << index << " " << max;
    return 0;
}