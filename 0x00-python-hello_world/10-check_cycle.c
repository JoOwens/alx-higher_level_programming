#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to be checked
 *
 * Return: 1 if the list has a cycle else 0
 */
int check_cycle(listint_t *list)
{
	listint_t *a = list;
	listint_t *b = list;

	if (!list)
		return (0);

	while (a && b && b->next)
	{
		a = a->next;
		b = b->next->next;
		if (a == b)
			return (1);
	}

	return (0);
}
