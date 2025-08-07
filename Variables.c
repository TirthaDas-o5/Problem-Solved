#include <stdio.h>
int main()
{
    int i;
    long long int ll;
    float f;
    char ch;
    scanf("%d %lld %f %c", &i, &ll, &f, &ch);
    printf("%d\n%lld\n%.2f\n%c", i, ll, f, ch);
    return 0;
}