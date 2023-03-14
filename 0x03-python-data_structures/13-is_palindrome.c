#include "lists.h"

/**
 * is_palindrome - checks if a list is palindrome or not.
 * @head: head of the list
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(listint_t **head)
{
	listint_t *cmcpy;
	listint_t *cpy;
	unsigned int len, i;

	if (head == NULL)
		return (1);

	cpy = *head;
	cmcpy = *head;
	for (len = 0; cmcpy->next != NULL; len++)
		cmcpy = cmcpy->next;

	while (len > 0)
	{
		if (cpy->n == cmcpy->n)
		{
			len--;
			cpy = cpy->next;
			cmcpy = *head;
			for (i = len; i > 0; i--)
				cmcpy = cmcpy->next;
		}
		else
			break;
	}

	if (cpy->n == cmcpy->n)
		return (1);

	return (0);
}
