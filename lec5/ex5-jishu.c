#include<stdio.h>
#include<math.h>
void main()
{
    float x,k,y=1;
    int n,i=1;
    scanf("%f%d",&x,&n);
    k=x;
    while(i<=n)
    {
        y+=k;
        k=k*x/(i+1);
        i++;
    }
    printf("jishu=%f\n",y);
    getchar();
    getchar();
}