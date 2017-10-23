#include <stdio.h>
void main()
{
    unsigned kk,n;
    //while(1)
    //{
    scanf("%u",&n);
    kk=n%10*10+n/10;
    printf("%d\t%d\n",n,kk);
    //}
    int i,j,k,m,l=5;
    i=j=6;
    l=i+j+(++i);
    k=(++i)+(++i)+(++i)+(++i);
    m=j+++j+++j++;
    printf("i=%d j=%d\nk=%d m=%d\n",
    i,j,k,m);
    getchar();
}

