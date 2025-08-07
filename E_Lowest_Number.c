#include <stdio.h>
#include <limits.h>
int main()
{
    int n, min = INT_MAX, pos;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (min > a[i])
        {
            min = a[i];
            pos = i;
        }
    }
    printf("%d %d",min,pos+1);
    return 0;
}