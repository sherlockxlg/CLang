#include<stdio.h>
  void main()
 {  
    int num, n=0;		/* n存放位数 */
    scanf("%d",&num);
    num=num>0? num:-num;  /* 把负数转化成正数 */
    do
    {
      n++;			/* 位数加1 */                
      num/=10;	    /* 去除num的个位数 */
	} while(num!=0);                      
	printf("n=%d \n",n); 
    getchar();
    getchar();
}
