#include <stdio.h>
int main(void)
{
	int i, c = 0, cc = 0;
	char pw[100] = {};
	printf("�߰��� ��ȣ�� : \n");
	gets_s(pw);
	for (i = 0; i < sizeof(pw); i++)
	{
		if (pw[i] == 'c' || pw[i] == 'C')
		{
			c++;
			if (pw[i + 1] == 'c' || pw[i + 1] == 'C')
				cc++;
		}
	}
	printf("���� C : %d��\n���� CC : %d��", c, cc);
}