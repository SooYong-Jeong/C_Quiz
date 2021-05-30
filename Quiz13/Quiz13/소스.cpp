#include <stdio.h>
int main(void)
{
	int i;
	char pw[100] = {};
	printf("╬охё : ");
	gets_s(pw);
	for (i = 0; i < sizeof(pw); i++)
	{
		if (pw[i] == 0)
			break;
		else if (pw[i] == ' ')
			printf(" ");
		else if (pw[i] <= 'c')
			printf("%c", pw[i] + 23);
		else
			printf("%c", pw[i] - 3);

	}

}