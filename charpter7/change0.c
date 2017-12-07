#include<stdio.h>
void change(int x[ ][5],int n , int m)  
{    int  i,j; 
      for(i=0; i<n; i++)
	        for(j=0; j<m; j++)
	           if (i<=j)  x[i][j]=0;
 }

 void main()
 {   int t,a[5][5];
     int i,j ;
     void change(int x[ ][5],int n, int m) ;
     printf("原矩阵:\n");
     for(i=0; i<5; i++)
     {  for(j=0; j<5; j++)    
	    {   a[i][j]=1+i+j;  
            printf("%3d",a[i][j]);}
        printf("\n");
     } 
     change(a,5,5);     //调用函数
     printf("\n修改后的矩阵:\n");
     for(i=0; i<5; i++)
     {	  for(j=0; j<5; j++)
	             printf("%3d",a[i][j]);
	       printf("\n");
      }
      getchar();
}
