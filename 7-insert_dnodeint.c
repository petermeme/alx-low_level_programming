#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a node in the postion
 * @h: Pointer to direction of the head
 * @n: The data integer
 * @idx: Position at the insert the new node
 * Return: The direction of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *res_nod = *h;
	/* unsigned int counter = 0 */

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (res_nod == NULL)
			return (NULL);
		res_nod = res_nod->next;
	}

	if (res_nod->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_nod->n = n;
	new_node->next = res_nod->next;
	new_node->prev = res_nod;
	res_nod->next->prev = new_node;
	res_nod->next = new_node;

	return (new_mem);
}
