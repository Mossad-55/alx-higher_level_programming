#include "lists.h"

/**
 * check_cycle - finds if there any cycle in a linkedlist.
 * @list: pointer to the linked list.
 * Return: int (0 Or 1).
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = *list;
	listint_t *fast = *list.next;

	while (fast != null && slow != fast)
	{
		slow = slow.next;
		fast = fast.next.next;
	}

	return (fast == slow);
}
