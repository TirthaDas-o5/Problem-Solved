#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        i % 5 == 0 ? printf("%d Yes\n", i) : printf("%d No\n", i);
    }
    return 0;
}