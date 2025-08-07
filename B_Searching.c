#include <stdio.h>
int main()
{
    int n, pos, flag = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            pos = i;
            flag = 1;
            break;
        }
    }
    flag == 1 ? printf("%d", pos) : printf("-1");
    return 0;
}