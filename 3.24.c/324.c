#include <stdio.h>
#define PI 3.141592
//PI �� ��ȣ ���(���� �빮��)
int main()
{
	printf("%f\n", PI);
	//strl +F7 : compile
	//ctrl +F5 : ����(�̰� ���ص� �մܰ� �� �����)
	//alt+����f : �� �ٲٱ�
	int r = 5; // radius
	printf("���� ���� : %f \n", r * r * PI);
	//���� �ѷ� ���� ����
	printf("���� �ѷ� : %f \n", 2 * PI * r);
	printf("���� ���� : %.2f \n", 4.0 / 3.0 * PI * r * r * r); // 4/3�ϸ� 1�� ó��//�Ҽ� ��° : %.2f
	return 0;
}