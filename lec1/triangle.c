#include <stdio.h>  //——预处理指令
#include <math.h>
void main()      //———main()函数
{  
    // int a,b=10,c;
    // c=a+b;
    // printf("a=%d,b=%d,c=%d\n",a,b,c);
    float x,y,z,s,dime;           //  4
    scanf("%f%f%f",&x,&y,&z);    //  5
          /*输入三角形的三个边长*/   //——注释
    s=(x+y+z)/2;                //  6       ——注释
    dime=sqrt(s*(s-x)*(s-y)*(s-z));   //——分号
    printf("三角形面积为%f\n",dime); //  8
          /*输出三角形的面积*/
    getchar();
    return;
}