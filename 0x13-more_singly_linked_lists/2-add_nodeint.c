#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: the address of the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
