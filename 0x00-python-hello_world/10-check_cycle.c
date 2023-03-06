#include "lists.h"

/**
 * check_cycle - finds if there any cycle in a linkedlist.
 * @list: pointer to the linked list.
 * Return: int (0 Or 1).
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;

	while (list && list->next)
	{
		list = list->next->next;
		slow = slow->next;
		if (slow == list)
			return (1);
	}

	return (0);
}
