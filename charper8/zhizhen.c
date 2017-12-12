#include<stdio.h>
void main()
{   int a=100,*pa;
    pa=&a;        //把变量a的地址赋给pa
    printf("a=%d, *pa=%d\n",a,*pa);
    a=200;   
    printf("a=%d, *pa=%d\n",a,*pa);
    *pa=300;   //给pa的对象赋值，即给a赋值
    printf("a=%d, *pa=%d\n",a,*pa);
    getchar();
}
