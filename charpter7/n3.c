#include <stdio.h>
#define N 18
void main()
{
    int i, a[N], k = 0, delc = 0;
    for (i = 0; i < N; i++)
        a[i] = 1;
    /*a[i]表示某人的状态， 1表示在队列中 */
    while (delc < N - 1) // delc 为出列人数
        for (i = 0; i < N; i++)
        {
            if (a[i] != 0)
                k++; // k为报数值
            if (k == 3)
            {
                /*报数3的人出列，出列人数自增1，报数值清0*/
                a[i] = 0;
                k = 0;
                delc++;
            } //if
        }     //while
    for (i = 0; i < N; i++)
        if (a[i] != 0)
            printf("%d\n", i);
    getchar();
} //main
