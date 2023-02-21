#include <unistd.h>

int _putchar(int c) /* defines function putchar */
{
	return (write(1, &c, 1));
}
