#include <iostream>
using namespace std;
int main()
{
    int boundA, boundB, N;
    int numA, sumA, numB, sumB, countA = 0, countB = 0;
    cin >> boundA >> boundB;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> numA >> sumA >> numB >> sumB;
        if (numA + numB == sumB && numA + numB != sumA)
        {
            boundB--;
            countB++;
        }
        else if (numA + numB == sumA && numA + numB != sumB)
        {
            boundA--;
            countA++;
        }
        if (boundB == -1 || boundA == -1)
        {
            if (boundB == -1)
            {
                cout << "B" << endl;
                cout << countA;
                break;
            }
            if (boundA == -1)
            {
                cout << "A" << endl;
                cout << countB;
                break;
            }
        }
    }

    return 0;
}
