#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers 
 *                       in ascending order using the Insertion sort algorithm
 *
 * @list: 
 */

void insertion_sort_list(listint_t **list)
{
	struct listint_t *current = NULL, *index = NULL;
	struct listint_t *head = NULL, *tail = NULL;
	int temp;

	if(head == NULL)
		return;
	else
	{
		current = head;
		while(current->next != NULL)
		{
			index = current->next;
			while(index != NULL)
			{
				if(current->n > index->n)
				{
					temp = current->n;
					current->n = index->n;
					index->n = temp;
				}
				index = index->next;
			}
			current = current->next;
		}
	}
}
