#include <stdio.h>

int main(void)
{
	int i, j;
	/*int k, e, m;
	printf("세 과목의 점수를 입력하세요...\n");
	printf("국어 점수 : \n");
	
	printf("영어 점수 : \n");
	printf("수학 점수 : \n");
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

