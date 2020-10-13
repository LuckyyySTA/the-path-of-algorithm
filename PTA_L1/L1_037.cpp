#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float A, B;
    cin >> A >> B;
    if (B == 0)
    {
        cout << A << "/" << B << "=Error" << endl;
    }
    else if (B > 0)
    {
        cout << A << "/" << B << "=" << fixed << setprecision(2) << float(A / B) << endl;
    }
    else
    {
        cout << A << "/(" << B << ")=" << fixed << setprecision(2) << float(A / B) << endl;
    }
    return 0;
}