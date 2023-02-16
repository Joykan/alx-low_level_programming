#include<stdio.h>

/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
printf("size of a char: %ld 1 byte(s)", sizeof(char));
printf("size of an int: %ld 4 byte(s)", sizeof(int));
printf("size of a long int: %ld 8 byte(s)", sizeof(long int));
printf("size of a long long int: %ld 8 byte(s)", sizeof(long long int));
printf("size of a float: %ld 4 byte(s)",sizeof(float));
return (0);
}

