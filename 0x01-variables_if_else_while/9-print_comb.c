#include <studio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a=0; a < 100; a++) 
	{
		putchar(a + '0');
		if (a < 9) 
		{
	            	putchar(',');
        		putchar(' ');
		}
	}
        putchar('\n');
        return(0);
        }
