#include <stdio.h>
/**
 * main - Prints number of arguments
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
/* to suppress unused variable warning */
argv = argv;
printf("%d\n", argc - 1);
return (0);
}
