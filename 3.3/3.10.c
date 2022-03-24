#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//헤더파일 중 표준 입출력(키보드, 모니터 등)
int main()
{
	int a, b, c;
	a = 15;
	b = 30;
	c = a + b;
	printf("%d \n", c);
	scanf("%d", &a); // scanf_s()
	printf("%d", a);
	return 0;
}