#include "main.h"
/**
 * _isalpha - check lowercase or uppercase
 * @c: character check
 *
 * Return: zero or one
 */

int _isalpha(int c)

{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);

else
	
return (0);
}
