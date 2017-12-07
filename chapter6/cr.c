#include <stdio.h>
#define CR printf("\n")
#define CR2 CR;CR
#define find_max                   \
    scanf("%f", &max);             \
          for (i = 2; i <= n; i++) \
    {                              \
        scanf("%f", &x);           \
        if (x > max)               \
            max = x;               \
    }                              
void main()
{
    float y1, y2, max, x;
    int i, n;
    n = 3;
    find_max;
    y1 = max;
    n = 2;
    find_max;
    y2 = max;
    printf("%f", y1);
    CR;
    printf("%f", y2);
    CR2;
    printf("CR%f", y1 * y2);
    CR;
    system("pause");
}
