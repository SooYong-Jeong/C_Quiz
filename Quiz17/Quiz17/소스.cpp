#include <stdio.h>
int main(void)
{
	int go[361] = {};
	int wd, x, y, i, j;
	printf("�� ���� ���� ���� �Է� : ");
	scanf_s("%d", &wd);
	printf("�� ���� ���� ��ǥ(x, y)�� �������� �����Ͽ� �Է�");
	for (i = 0; i < wd; i++)
	{
		scanf_s("%d,%d", &x, &y);
		go[(x - 1) * 19 + y - 1] = 1;
	}
	for (i = 0; i < 361; i++)
	{
		printf("%d ", go[i]);
		if ((i + 1) % 19 == 0)
			printf("\n");
	}

}