#include <stdio.h>
void main()
{
    int i,j,k,m,l=5;
    i=j=6;
    l=i+j+(++i);
    k=(++i)+(++i)+(++i)+(++i);
    m=j+++j+++j++;
    printf("i=%d j=%d\nk=%d m=%d\n",
    i,j,k,m);
    getchar();
}

