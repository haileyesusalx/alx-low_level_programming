#include "main.h"
#include <unistd.h>
/**
* _putchar - write character
* @c: input character
*/
int _putchar(char c)
{
return write(1, &c, 1);
}
