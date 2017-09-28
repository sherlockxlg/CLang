#include <stdio.h>
void main()
{
    int n,i=1,jc=1;
    scanf("%d",&n);
    while(i<=n)
    {
        jc*=i;
        i++;
    }
    printf("%d! = %d\n",n,jc);
    system("pause");
}