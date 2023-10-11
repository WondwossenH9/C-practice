#include <stdio.h>
void oddoreven(int);

void main(void)
{
	int num;

	printf("Enter a number:\n");
	scanf("%d", &num);

	oddoreven(num);
}
void oddoreven(int a)
{
	if ((a % 2) == 0)
		printf("Number is even!\n");
	else
		printf("Number is odd!\n");
}
