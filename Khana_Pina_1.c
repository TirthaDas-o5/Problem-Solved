#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 100)
    {
        if (n >= 1000)
        {
            printf("Three Kacchi\n");
        }
        else if (n >= 500)
        {
            printf("One Large Pizza\n");
        }
        else if (n >= 250)
        {
            printf("Three Small Burger\n");
        }
        else
        {
            printf("Three Fuchka\n");
        }
    }
    else
    {
        printf("Nothing\n");
    }
    return 0;
}