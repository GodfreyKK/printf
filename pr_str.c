#include "main.h"
/**
 * pr_str - print string
 * @s: string
 * Return: count
 */
int pr_str(char *s)
{
	unsigned int count = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		pr_char(s[count]);

	}
	return (count);
}
