#include "main.h"

/**
* _islower - Check for lowercase character
* @para: contains parameter to compare
* Return: 0 throw Success
*/
int _islower(int para)
{

	if (para > 'a' && para < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
