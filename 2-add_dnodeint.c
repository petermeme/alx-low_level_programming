#include "lists.h"
/**
 * add_dnodeint- Insert new node at the beginnig
 * @head: Is the pointer to the direction of the head
 * @n:The data integer
 * Return: The new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));

	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->prev = NULL;
	new_nod->next = *head;

	if (*head != NULL)
		(*head)->prev = new_nod;
	*head = new_nod;

	return (new_nod);
}
