#include <iostream>
using namespace std;
int main()
{
    int week[7] = {1, 2, 3, 4, 5, 6, 7};
    int D;
    cin >> D;
    cout << week[(D + 1) % 7];
    return 0;
}