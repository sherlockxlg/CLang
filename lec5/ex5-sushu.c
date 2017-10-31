#include <stdio.h>
#include <math.h>
void main()
{
    int i, j, k = 1; // k统计所找出素数的个数
    printf("%6d", 2);
    for (i = 3; i < 500; i = i + 2)
    {
        for (j = 3; j <= sqrt(i); j = j + 2)
            if (i % j == 0)
                break;
        if (j > sqrt(i))
        {
            printf("%6d", i);
            k++;
            if (k % 10 == 0)
                printf("\n"); //每输出10个换行
        }
    }
    getchar();
}
