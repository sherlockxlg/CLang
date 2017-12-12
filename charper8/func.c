#include <stdio.h>
float mult(float x, float y) // 函数mult，求x,y的乘积。
{
    return x * y;
}
float div(float x, float y) // 函数div，求x,y的商。
{
    if (y != 0)
        return x / y; //返回x,y的商
    else
    {
        printf("error\n");
        return 0;
    } //返回0，表示除数为0
}
void main()
{
    float (*p)(float, float); //定义p为指向函数的指针变量
    float y;
    p = &mult;
    y = (*p)(5, 3); //调用函数mult(5,3)，也可写成(*p)(5,3)
    printf("%.1f\n", y);
    p = div;
    y = p(5, 3); //调用函数div(5,3)，也可写成(*p)(5,3)
    printf("%.1f\n", y);
    getchar();
}
