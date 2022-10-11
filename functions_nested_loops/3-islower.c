#include "main.h"
/**
 *_islower - check lowercase
 *@c:character 
 *
 *Return: zero or one
 */

int _islower(int c)

{
if (c >= 'a' && c <= 'z')
return (1);

else
return (0);
}
