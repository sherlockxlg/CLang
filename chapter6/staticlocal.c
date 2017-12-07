#include "stdio.h"
int func1()
{
    static int s = 1;
    s += 2; //静态局部变量
    return (s);
}
int func2()
{
    int s = 1; //局部变量
    s += 2;
    return (s);
}
void main()
{
    int i;
    for (i = 0; i < 3; i++)
        printf("%5d", func1());
    printf("\n");
    for (i = 0; i < 3; i++)
        printf("%5d", func2());
    getchar();
}