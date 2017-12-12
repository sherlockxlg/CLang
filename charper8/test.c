#include<stdio.h>
void main()
{
   // int *p2[3];
   // int (*p3)[3];
   // 
   // int a=2,b=3,*p1=&a;
   // p1=p1+1;
   // printf("%d\n",*p1);

    char *s1 = "Do you know?", *s2;
    s2 = "Ok!";
    printf("%s\n%s", s1, s2); //输出s1,s2指向的字符串
    printf("%s\n%c", s1 + 2, *s2);
    getchar();
    char *p, s[80];
    p=s[0];
    scanf("%s",s);
    printf("%s\n",p);
    scanf("%s",s);
}