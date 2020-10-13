#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> arrA;
    vector<int> arrB;
    while (N--)
    {
        int A, B;
        scanf("%d/%d", &A, &B);
        arrA.push_back(A);
        arrB.push_back(B);
        for (int i = 0; i < arrA.size(); i++)
        {
            int temp, ;
            temp = A % B;
            if (temp == 0)
            {
            }
            A = B;
            B = temp;
        }
    }
}