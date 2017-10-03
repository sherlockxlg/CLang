#include <stdio.h>
void main()
{
    int n;
    float i=1,jc=1;
    scanf("%d",&n);
    while(i<=n)
    {
        jc=jc*i;
        i=i+1;
    }
    printf("%d! = %f\n",n,jc);
    system("pause");
}