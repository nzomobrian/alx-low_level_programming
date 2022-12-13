#include "main.h"
#include <unistd.h>

/**
 * _putchar
 * Return: Success 1
 *         error -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
