#include <stdio.h>

int main(void)
{
	int i, j;
	/*int k, e, m;
	printf("�� ������ ������ �Է��ϼ���...\n");
	printf("���� ���� : \n");
	
	printf("���� ���� : \n");
	printf("���� ���� : \n");
	*/
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*i + 1; j++)
		{
			printf("*");
		}
		for (j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
}

