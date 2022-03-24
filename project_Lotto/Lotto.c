#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define PI 3.14
int main()
{
	srand(time(NULL)); //rand쓰기 위한
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", rand()%46+1);
		//rand() : 랜덤값을 리턴해주는 함수
	}
	
	return 0;
}