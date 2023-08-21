#include "main.h"
/**
 * _strlen - unction that returns the length of a string
 * @s: char
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
