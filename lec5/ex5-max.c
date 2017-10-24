#include <stdio.h>
void  main()
{  
   int num1,num2,num3,max;
   printf("Please input three numbers:");
   //*
   scanf("%d,%d,%d",&num1,&num2,&num3);
   if (num1>num2) 
       max=num1;
   else 
       max=num2;
   if (num3>max)  
       max=num3;
    /*/
    int x,y,z;
    scanf("%d,%d,%d",&x,&y,&z);
    max=x;     
    if(z>y)    
        if(z>x)    
            max=z;  
    else        
        if(y>x)    
            max=y; 
   //*/
   printf("max=%d\n",max);
   //scanf("%d",&max);
   //getchar();
   fflush(stdin);
   getchar();
}
