#include <stdio.h>

int main(void)
{
	int n, i, j;
	printf("�غ��� ���̷� ����� �� �Է� : ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
			printf(" ");
		for (j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}
}