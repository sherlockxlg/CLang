#include <stdio.h>
void main()
{
    char ch;
    do
    {
        scanf("%c",&ch);
        if(ch!=10)
            printf("%c的ASCII码是%d\n",ch,ch);
    }while(ch!='?');

    system("pause");
}