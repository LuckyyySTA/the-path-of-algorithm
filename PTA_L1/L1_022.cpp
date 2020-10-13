#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int odd = 0, even = 0;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << odd << " " << even;
    return 0;
}