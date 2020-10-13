#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int start, end, sum = 0, count = 0;
    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        cout << setw(5) << i;
        sum += i;
        count++;
        if (count == 5)
        {
            cout << endl;
            count = 0;
        }
    }
    if (count != 0)
        cout << endl;
    cout << "Sum = " << sum;
}