#include <stdio.h>
#include <math.h>
void main()
{
    int m,y;
    double r,s;
    printf("请输入贷款数、年数及贷款年利率\n");
    scanf("%d%d%lf",&m,&y,&r);
    s=pow(1+r,y)*m;
    printf("总额为：%f\n",s);
    system("pause");
}