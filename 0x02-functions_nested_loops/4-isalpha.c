#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @para: Parameter for check
* Return: 0 throw Success
*/
int _isalpha(int para)
{

	if ((para > 'a' && para < 'z') || (para > 'A' && para < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
