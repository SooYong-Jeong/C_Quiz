#include <stdio.h>

int main(void)
{
	int k, e, m;
	printf("�� ������ ������ �Է��ϼ���...\n");
	printf("���� ���� : ");
	scanf_s("%d", &k);
	printf("���� ���� : ");
	scanf_s("%d", &e);
	printf("���� ���� : ");
	scanf_s("%d", &m);
	int total = k + e + m;
	printf("�հ� : %d��, ��� : %.1f",total, (double)total/3);
}

