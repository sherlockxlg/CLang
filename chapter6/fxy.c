#include <stdio.h>
#define f(a, b) (a) *(b)
void main()
{
    float x = 2, y = 3, z;
    z = f(x, y); // 宏展开为： z=x*y;
    printf("%f\t", z);
    z = f(x * x + 2 * x - 5, y + 3);
    printf("%f\n", z);
    getchar();
}
