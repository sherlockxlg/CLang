#include <stdio.h>
int sum(int k)
{
    static int y = 0;
    for (int i = 1; i <= k; i++)
        y += i;
    return y;
}
void main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d\n", sum(m) + sum(n));
    scanf("%d%d", &m, &n);
}
