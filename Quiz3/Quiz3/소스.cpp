#include <stdio.h>

int main(void)
{
	long long a, b;
	printf("����� �� ���� �Է� : ");
	scanf_s("%lld %lld", &a, &b);
	long long c = a + b;
	printf("�� ���� �հ� : %lld\n�� ���� ��� : %.1f",c, (double)c/2);
}