#include <stdio.h>
int main(void)
{
	int n = 0;
	int i;
	int y[4];
	printf("������ ���� ���� 4���� �������� �����Ͽ� �Է��ϼ��� : ");
	scanf_s("%d %d %d %d", &y[0], &y[1], &y[2], &y[3]);
	for (i = 0; i < 4; i++)
	{
		if (y[i] == 1)
			n++;
	}
	if (n == 0)
		printf("��");
	else if (n == 1)
		printf("��");
	else if (n == 2)
		printf("��");
	else if (n == 3)
		printf("��");
	else if (n == 4)
		printf("��");
}