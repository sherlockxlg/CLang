#include <stdio.h>
//long reverse(long n);
void main()
{
    long a, reverse(long);
    scanf("%d", &a);
    printf("调用reverse前：a=%d\n", a);
    printf("函数值：%d\n", reverse(a));
    printf("调用reverse后：a=%d\n", a);
    getchar();
    getchar();
}
long reverse(long n)
{
    long k = 0;
    while (n)
    {
        k = k * 10 + n % 10;
        n /= 10;
    }
    return k;
}
