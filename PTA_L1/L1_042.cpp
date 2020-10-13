#include <iostream>
using namespace std;
int main()
{
    int m, d, y;
    scanf("%d-%d-%d", &m, &d, &y);
    printf("%d-%02d-%02d", y, m, d);
    return 0;
}