#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using insertion sort algorithm
 * @list: pointer to a pointer to the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *temp;

	curr = *list;
	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;

	while (curr != NULL)
	{
		while (curr != NULL && (curr->prev == NULL ||
		       curr->prev->n <= curr->n))
		{

			curr = curr->next;
		}

		if (curr != NULL && curr->prev != NULL &&
		    curr->prev->n > curr->n)
		{

			temp = curr->prev;
			temp->next = curr->next;
			if (curr->next != NULL)
			{
				curr->next->prev = temp;
			}
			if (temp->prev != NULL)
			{
				temp->prev->next = curr;
			}
			else
			{
				*list = curr;
			}
			curr->prev = temp->prev;
			temp->prev = curr;
			curr->next = temp;
			print_list(*list);
		}
	}
}
