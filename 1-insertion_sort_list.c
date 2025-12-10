#include "sort.h"

void node_swap(listint_t **list, listint_t *a, listint_t *b);
/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort.
 * @list: Pointer to the pointer to the head of the list.
 *
 * Description: Sorts integers in ascending order by swapping nodes,
 * not values.
 *              Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		tmp = current;
		current = current->next;

		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			node_swap(list, tmp->prev, tmp);
		}
	}
}

/**
 * node_swap - Swaps two adjacent nodes in a doubly linked list.
 * @list: Pointer to the pointer to the head of the list.
 * @a: Pointer to the first node.
 * @b: Pointer to the second node.
 *
 * Description: Swaps nodes a and b where a comes before b.
 *              Updates the head of the list if necessary.
 *              Prints the list after the swap.
 */
void node_swap(listint_t **list, listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	else
		*list = b;

	if (b->next)
		b->next->prev = a;

	a->next = b->next;
	b->prev = a->prev;
	b->next = a;
	a->prev = b;

	print_list(*list);
}
