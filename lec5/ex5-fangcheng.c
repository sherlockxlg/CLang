#include <stdio.h>
#include <math.h>
void main()
{
    double x0, x1, a;
    scanf("%lf", &a);
    x0 = 2;
    x1 = (x0 + a / x0) / 2;
    while (fabs(x1 - x0) >= 1e-10)
    {
        x0 = x1;
        x1 = (x0 + a / x0) / 2;
    }
    printf("%.10f\n", x1);
    scanf("%lf", &a);
}
