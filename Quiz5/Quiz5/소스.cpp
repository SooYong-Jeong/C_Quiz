#include <stdio.h>

int main(void)
{
	long int n;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%ld", &n);
	if (n < 0)
		printf("����\n");
	else printf("���\n");

	if (n % 2 == 0)
		printf("¦��\n");
	else printf("Ȧ��\n");
	return 0;
}