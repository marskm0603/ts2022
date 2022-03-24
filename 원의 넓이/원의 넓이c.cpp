#include <stdio.h>
#define PI 3.14
int main()
{
	int r = 5;
	printf("원의 면적 : %f\n", PI * r * r);
	printf("원의 둘레 : %f\n", PI * 2 * r);
	printf("구의 부피 : %f\n", PI * r * r * r * (4.0/3.0));
	return 0;
}
