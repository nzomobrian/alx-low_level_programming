#include "main.h"
#include "stdio.h"

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
		_putchar('b');
		_putchar('u');
		_putchar('z');
		_putchar('z');
		
		if ((num % 3) == 0)
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
	       
		if ((num % 5) == 0)
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');

		if (num == 100)
			continue;
		printf(" ");
	}
	return (0);
}
