#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert a number into a sorted singly linked list
 * @head: pointer to address of head node
 * @number: number to be added into sorted list
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *temp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = number;
	if (*head)
	{
		temp = *head;
		if (number <= temp->n)
		{
			new->next = temp;
			*head = new;
		}
		else
		{
			while (number > (temp->next)->n)
			{
				temp = temp->next;
				if (!temp->next)
					break;
			}
			new->next = temp->next;
			temp->next = new;
		}
	}
	else
	{
		new->next = NULL;
		*head = new;
	}
	return (new);
}
