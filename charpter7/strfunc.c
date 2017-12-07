#include<stdio.h>
#include<string.h>
void main()
{
    char  str1[31],str2[31];
    strcpy(str1, "Apple is sweet");
    strcpy(str2,str1);
    puts(str2);

    char a[18]="Microsoft ",b[]="  word";
    strcat(a,b);  puts(a); 
    strcat(a,"97");  puts(a);

    char pass_str[80];
    int i = 0;
    while (1)
    {
        printf("请输入密码:\n");
        gets(pass_str);
        if (strcmp(pass_str, "mypass") != 0)
            printf("口令错误，");
        else
        {
            printf("口令正确!");
            break; /*输入正确的密码，中止循环*/
        }
        i++;
        if (i == 3)
            exit(0); //stdlib.h
    }

    getchar();
}