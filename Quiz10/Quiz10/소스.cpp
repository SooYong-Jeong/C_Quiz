#include <stdio.h>

int main(void)
{
	int n, length;
	printf("�⳪���� ���� : ");
	scanf_s("%d", &n);
	printf("� ���̷� �ڸ����? ");
	scanf_s("%d", &length);
	int pice = n / length + 1;
	if (n % length == 0)
		pice -= 1;
	printf("���� ���� %d�Դϴ�.", pice);
}