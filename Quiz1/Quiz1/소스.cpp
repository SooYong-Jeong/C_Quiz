#include <stdio.h>

int main(void)
{

	const char* name = "�ų���";

	int age = 20;

	char sex = 'F';

	float sleep_time = 6.25;

	const char* mental = "�ְ� ���ٴ� �ּ���";

	printf("=*=*=*=*=*=*[ �л� ���� ]*=*=*=*=*=*=\n");
	printf("  ��    �� :\t%s\n", name);
	printf("  ��    �� :\t%d\n", age);
	printf("  ��    �� :\t%c\n", sex);
	printf("  ����ð� :\t%.2f�ð�\n", sleep_time);
	printf("  �������� :\t%s\n", mental);
	printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");

	return 0;
}