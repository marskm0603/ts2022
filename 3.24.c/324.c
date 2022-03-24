#include <stdio.h>
#define PI 3.141592
//PI 는 기호 상수(거의 대문자)
int main()
{
	printf("%f\n", PI);
	//strl +F7 : compile
	//ctrl +F5 : 실행(이거 만해도 앞단계 다 실행됨)
	//alt+방향킼 : 줄 바꾸기
	int r = 5; // radius
	printf("원의 면적 : %f \n", r * r * PI);
	//원의 둘레 구의 부피
	printf("원의 둘레 : %f \n", 2 * PI * r);
	printf("원의 부피 : %.2f \n", 4.0 / 3.0 * PI * r * r * r); // 4/3하면 1로 처리//소수 둘째 : %.2f
	return 0;
}