#include<stdlib.h>                       //exit(0)函数的头文件
#include<stdio.h>
void main()
{  float a,b,d;
   char p;
   printf("输入计算式:\n"); 
   scanf("%f%c%f",&a,&p,&b);
   switch (p) 
   {
       case  '+' :  
            d=a+b;     
            break;	
       case  '-'  :  
            d=a-b;      
            break;
       case  '*'  :  
            d=a*b;      
            break;
       case  '/'   :  
            if (b!=0)   
            {   
                d=a/b;   
                break;   
            }
       default    :  
            printf("error\n");   
            getchar(); 
            getchar(); 
            exit(0);  
   }
   printf(" =%.2f\n",d);
   getchar();
   getchar();
}
