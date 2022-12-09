#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

<<<<<<< HEAD
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	if (m < 6 && m != 0)
=======
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	else
>>>>>>> 605f2a82b42d08c725a23d55899df092f0079d89
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
