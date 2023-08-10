#include <unistd.h>
#include <string.h>
/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of the puts function.
 * It displays a message to the standard output.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
char *message = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
write(2, message, strlen(message));
return (1);
}
