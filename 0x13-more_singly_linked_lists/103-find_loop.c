#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts 
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *kangaroo;

	snail = kangaroo = head;
	while (snail && kangaroo && kangaroo->next)
	{
		snail = snail->next;
		kangaroo = kangaroo->next;
		if (snail == kangaroo)
		{
			snail = head;
			break;
		}
	}
	if (!snail || !kangaroo || !kangaroo->next)
		return (NULL);
	while (snail != kangaroo)
	{
		snail = snail->next;
		kangaroo = kangaroo->next;
	}
	return (kangaroo);
}
