#include <stdio.h>
int main(void)
{
	int n;
	printf("������ �Է��ϼ���.(0~99) : ");
	scanf_s("%d", &n);
	if(n>99)
		printf("�Է� ���� ������ �ʰ��߽��ϴ�.");
	else
	{
		printf("%d", n);
		if (n % 10 == 1)
			printf("st");
		else if (n % 10 == 2)
			printf("nd");
		else if (n % 10 == 3)
			printf("rd");
		else
			printf("th");
	}
}