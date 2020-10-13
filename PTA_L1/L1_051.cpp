#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int price, degree;
    cin >> price >> degree;
    cout << fixed << setprecision(2) << price * degree * 0.1;
    return 0;
}