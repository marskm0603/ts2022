#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������� �� ǥ�� �����(Ű����, ����� ��)
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