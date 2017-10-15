#include <stdio.h>
//#define PI 3.14
void main()
{
    float r1,r2;
    float s1,s2;
    const float PI=3.14;
    scanf("%f%f",&r1,&r2);
    s1 = PI*r1*r1;
    s2 = PI*r2*r2;
    printf("s1=%f,s2=%f\n",s1,s2);
    system("pause");
}