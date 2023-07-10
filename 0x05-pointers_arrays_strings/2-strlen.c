#include "main.h"
/**
 * _strlen - finds length of a string
 * @s: string pointer to the string whose length is to be found
 * Return: length of the string
 */

int _strlen(char *s)
{
	int p = 0;
	/*increment upto when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
