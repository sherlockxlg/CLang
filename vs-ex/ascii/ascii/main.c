#include <stdio.h>
void main()
{
	float r1, r2;
	float s1, s2;
	scanf("%f%f", &r1, &r2);
	s1 = 3.14159*r1*r1;
	s2 = 3.14159*r2*r2;
	printf("s1=%f,s2=%f", s1, s2);
	system("pause");
}