#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * followed by a newline, to standard error
 * Return: Always 1 (Success)
 */
int main(void)
{
fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
return (1);
}
