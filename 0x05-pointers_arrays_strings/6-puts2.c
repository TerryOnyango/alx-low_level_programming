#include <stdio.h>
#include "main.h"
/**
 * puts2 - print pair values.
 * @str: value to be evaluate.
 * Return: no.
 */
void puts2(char *str)
{
int len = 0;
int l = 0;
char *y = str;
int t;
while (*y != '\0')
{
y++;
len++;
}
l = len - 1;
for (t = 0 ; t <= l ; t++)
{
if (t % 2 == 0)
{
_putchar(str[t]);
}
}
_putchar('\n');
}
