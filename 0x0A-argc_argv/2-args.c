#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: array of pointers to arguement strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
