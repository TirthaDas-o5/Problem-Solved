#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    if (sum >= 0)
    {
        printf("%d", sum);
    }
    else
    {
        printf("%d", -sum);
    }
    return 0;
}