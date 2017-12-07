#include "stdio.h"
    float s;
void round(float r) //定义求圆面积
{
    s = 3.1415926 * r * r;
}
void main()
{
    float x = 3;
    float s=2;
    round(x);
    printf("%f ", s);
    getchar();
}
