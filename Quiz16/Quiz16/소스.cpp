#include <stdio.h>
int main()
{
	int N, M;
	int i, j, temp;
	int height[100];
	printf("�л� ���� �� �ٿ� ���� �� �ִ� �ڸ� �� �Է� : ");
	scanf_s("%d %d", &N, &M);
	printf("11���� �л� Ű �Է� : \n");
	for (i = 0; i < N; i++)
		scanf_s("%d", &height[i]);


	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - (i + 1); j++)
		{
			if (height[j] > height[j + 1])
				{
				temp = height[j + 1];
				height[j + 1] = height[j];
				height[j] = temp;
				}
		}
	}

	printf("�¼� ��ġ��\n");
	for (i = 0; i < N; i++)
	{
		printf("%d", height[i]);
		if ((i + 1) % M == 0)
			printf("\n");
	}
}
