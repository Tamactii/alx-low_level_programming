#include <unistd.h>
/**
 * entry - main
 * write(2, message, 59); // 2 represents STDERR, 59 is the length of the message
 *
 * return: 1 showing error
 */
int main(void) 
{
	const char *message = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";		write(2, message, 59);
	return (1);
}
