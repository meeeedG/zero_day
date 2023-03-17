#include<stdio.h>

int main(void)
{
	int a = 48;

	while (a != 57)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('9\n');
	return (0);
}
