#include <stdio.h>
int main(void)
{
	int height[10] = {};
	int i, j, man3rd, n = 1;
	printf("������ 10���� Ű �Է� : ");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &height[0], &height[1], &height[2], &height[3], &height[4], &height[5], &height[6], &height[7], &height[8], &height[9]);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (height[i] < height[j])
				n++;
		}
		if (n == 3)
			man3rd = height[i];
		n = 1;
	}
	printf("%d", n);
	printf("3��°�� ū ����� Ű : %d", man3rd);
}