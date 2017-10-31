#include <stdio.h>
void main()
{
    //char str[10];
    //gets(str);
    //scanf("%s",str);
    //printf("%s",str);
    char a;
    do
    {
        scanf("%2c", &a);
        printf("%c\n", a);
    } while (a != '?');
    int aa = 3;
    float ff;
    double dd;
    scanf("%3f", &ff);
    printf("%5.2f\n", ff);
    //fflush(stdin);
    getchar();
    getchar();
}