#include "main.h"
/**
 * pr_char - print character
 * @c: character to be printed
 * Return: number of characters
 */

int pr_char(char c)
{
	return(write(1, &c, 1));
}
