#include "lists.h"

/**
* print_listint - prints all the elements of a linked list
* @h: head of the list
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count_nodes = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count_nodes += 1;
		current = current->next;
	}

	return (count_nodes);
}
