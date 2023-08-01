#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index in the linked list
 * @head: first node in linked list
 * @index: index of the node
 *
 * Return: pointer to node we look for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
