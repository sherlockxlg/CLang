#define N 7
#include <stdio.h>
void main()
{
    float temp;
    int i, j, k,num=0;
    float a[7]={3,7,2,4,1,9,5};
    //for (i = 0; i < N; i++)
    //  scanf("%f", &a[i]);
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    for (i = 0; i < N; i++)
        printf("%f\t", a[i]);
    getchar();
}

