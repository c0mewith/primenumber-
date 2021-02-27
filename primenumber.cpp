#include<stdio.h>

int main()
{
	int i = 2, j = 0;
	int num;
	int n = 0;
	printf("출력할 소수의 개수? : ");
	scanf_s("%d", &num);
	printf("\n");

	for (i = 2; n < num; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0 && j != i)
				break;
			else if (i == j)
			{
				printf("%d ", j);
				n += 1;
			}
			else
				continue;
		}
	}
	return 0;
}

		
	

