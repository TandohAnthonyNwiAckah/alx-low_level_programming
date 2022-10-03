#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: Parameter string
* Return: pointer to duplicated string
*/

char *_strdup(char *str)
{
	char *_str;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		len++, i++;
	len++;
	_str = (char *)malloc(sizeof(char) * len);

	if (_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(_str + i) = *(str + i);
		i++;
	}
	return (_str);
}
