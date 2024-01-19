#include "monty.h"
/**
 * push_func - function to add node to stack
 * @head: head
 * @counter: counter
 * Return: none
*/
void push_func(stack_t **head, unsigned int counter)
{
	int o, k = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push an integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push an integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	o = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, o);
	else
		addqueue(head, o);
}
