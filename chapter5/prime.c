#include<stdio.h>
#include <math.h>
int isprime(int n) //定义判断素数的函数
{
    int i, flag = 1;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            flag = 0; //n非素数
            break;
        }
    return flag;
}
void main()
{
    float x = 11.3;
    float y=isprime('a');
    printf("y = %f", y);
    getchar();
    int k, n;
    n = 0;
    for (k = 2; k <= 1000; k++)
        if (isprime(k) == 1)
        {
            printf("%5d", k);
            n++;
            if (n % 6 == 0)
                printf("\n");
        }
    getchar();
}
