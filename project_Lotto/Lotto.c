#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define PI 3.14
int main()
{
	srand(time(NULL)); //rand���� ����
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", rand()%46+1);
		//rand() : �������� �������ִ� �Լ�
	}
	
	return 0;
}