#include <stdio.h>

void add(int a, int b)
{
	printf("Addition is %d\n", a+b);
}

void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}

void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

	void (*p[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a = 7, b = 6;

	printf("\n\nEnter Choice: 0 for add, 1 for subtract and 2 for multiply\n");
	scanf("%d", &ch);

	if (ch > 2) return 0;

	(*p[ch])(a, b);

	return 0;
}
