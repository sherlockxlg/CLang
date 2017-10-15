#include <stdio.h>
#include <math.h>
void main()
{
    int x=3; 
    double y;
    y=sin(58*3.14159/180);  
    printf("%f\n",y);
    getchar();
}

void main1()
{
    char c='A';
    char c1,c2,c3;
    putchar(c);
    putchar('A');
    putchar('\101');
    putchar('\x41');
    putchar(65);
    putchar('\n');
    c1=getchar();
    c2=getchar();
    c3=getchar();
    putchar(c1);
    putchar(c2);
    putchar(c3);
    scanf("%s",&c);
}