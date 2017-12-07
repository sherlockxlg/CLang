#define N 7
#include <stdio.h>
void main()
{
    float temp;
    int i, j, k;
    float a[7]={3,7,2,4,1,9,5};
    //for (i = 0; i < N; i++)
      //  scanf("%f", &a[i]);
    for (i = 0; i < N - 1; i++)
    {
        k = i;
        for (j = i + 1; j < N; j++)
            if (a[j] < a[k])
                k = j;
        temp = a[k];
        a[k] = a[i];
        a[i] = temp;
    }
    for (i = 0; i < N; i++)
        printf("%f\t", a[i]);
    getchar();
}
