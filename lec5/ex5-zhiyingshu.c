#include <stdio.h>
#include<math.h>

void prime_factors(int n) {
	int i;
	while(n % 2 ==0) {
		n = n / 2;
		printf("%d ", 2);
	}

	for(i = 3; i <= sqrt(n); i += 2) {
		while(n % i == 0) {
			n = n / i;
			printf("%d ", i);
		}
	}

	if(n > 2) {
		printf("%d" , n);
	}
	printf("\n");
}

void main()
{
    int n; // 用户输入的整数
    int i; // 循环标志
    printf("输入一个整数：");
    scanf("%d", &n);
    //prime_factors(n);
    printf("%d=", n);
    // n>=2才执行下面的循环
    for (i = 2; i <= n; i++)
    {
        while (n != i)
        {
            if (n % i == 0)
            {
                printf("%d*", i);
                n = n / i;
            }
            else
                break;
        }
    }
    printf("%d\n", n);
    getchar();
    getchar();
}