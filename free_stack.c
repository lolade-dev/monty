#include "monty.h"

/**
  * free_stack - frees all nodes in a stack.
  * @stack: pointer to head node pointer of a stack.
  *
  * Return: NAIN
  */
void free_stack(stack_t **stack)
{
	stack_t *temp = NULL;

	if (stack == NULL || *stack == NULL)
		return;

	while (*stack != NULL)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}