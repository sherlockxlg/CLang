#include<stdio.h>
void main()
{
    int a[3][4],*p[3],*p1;
    for(int i = 0;i<3;i++)
        for(int j = 0;j<4;j++)
            a[i][j]=i*4+j;
    p1=a[0];
    p[0]=a[1];
    printf("a[1][2]=%d\n", a[1][2]);
    printf("*(a[1]+2)=%d\n", *(a[1]+2));
    printf("*(*a+1)+2)=%d\n", *(*(a+1)+2));
    printf("*(*a+6)=%d\n", *(*a+6));
    
    printf("p[1][2]=%d\n", p[0][2]);

    printf("*(p[1]+2)=%d\n", *(p[0]+2));
    printf("*(p1+6)=%d\n", *(p1+6));
    printf("p1[6]=%d\n", p1[6]);
    printf("*(p+6)=%d\n", *(p+1));
    getchar();
}