#include <stdio.h>
#include <math.h>
void main()
{   
    double x0,x1,a; 
    scanf("%lf",&a); 
    x0=6.5;        // 任意给出a之平方根的初值。
    while(1) 
    {
        x1=(x0+a/x0)/2;
        if(fabs(x1-x0)<1e-10) 
            break;
        x0=x1;
    } 
    printf("%.10f\n",x1); 
    fflush(stdin);
    getchar();
}
