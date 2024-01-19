#include "monty.h"
/**
 * pall_func - Function to print stack
 * @head: head
 * @counter: counter
 * Return: none
*/
void pall_func(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	z = *head;
	if (z == NULL)
		return;
	while (z)
	{
		printf("%d\n", z->n);
		z = h->next;
	}
}
