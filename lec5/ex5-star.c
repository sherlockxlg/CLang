#include <stdio.h>
void main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            putchar(' '); // 输出第i行的n-i个空格
        for (j = 1; j <= 2 * i - 1; j++)
          //for(j=1;j<=n-i+1;j++)
          //for(j=1;j<=i;j++)
          //for(j=1;j<=n;j++)
            putchar('*');
        // 输出第i行的2×i-1个“*”符
        putchar('\n'); // 每行最后输出一个换行符
    }
    getchar();
    getchar();
}
