#include <stdio.h>
void main()
{
    printf("hello world!\n");
    int a = 1;
    int b = 2;
    int c;
    printf("a=%d,b=%d\n",a,b);
    c=a;        //swap a and b
    a=b;
    b=c;
    printf("a=%d,b=%d",a,b);
    getchar();
}