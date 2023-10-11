#include <stdio.h>

int maxmin(int, int);

void main(void)
{
	int num1, num2, result = 0;
	printf("Enter two numbers:\n");
	scanf("%d %d\n", &num1, &num2);

	result = maxmin(num1, num2);
	
	printf("The maximum number is %d\n", result);
}

int maxmin(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
