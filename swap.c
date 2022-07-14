#include "monty.h"

/**
  * swap - swaps top 2 elements of a stack.
  * @stack: pointer to the head node pointer of stack
  * @nline: line number
  *
  * Return: NAIN
  */
void swap(stack_t **stack, unsigned int nline)
{
	stack_t *temp;

	if (*stack && (*stack)->next)
	{
		temp = (*stack)->next;
		if (temp == NULL)
		{
			exit(0);
		}
		(*stack)->next = temp->next;
		(*stack)->prev = temp;
		temp->next = *stack;
		temp->prev = NULL;
		*stack = temp;
	}
	else
	{
		dprintf (2, "L%u: can't swap, stack too short\n", nline);
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}