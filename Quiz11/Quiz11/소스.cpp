#include <stdio.h>

int main(void)
{
	int vac = 0;
	int i, j, vi1, vi2, vi3;
	printf("�� ������ ������������ �Է� : ");
	scanf_s("%d %d %d", &vi1, &vi2, &vi3);

	for(i = 2;i < vi3;i++)
	{
		if ((vi1 % i == 0) && (vi2 % i == 0) && (vi3 % i == 0))
			vac = i;
		else continue;
	}
	if (vac == 0)
		printf("����� ����.");
	else printf("%d",vac);
}