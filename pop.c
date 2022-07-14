#include "monty.h"

/**
  * pop - removes top element of stack.
  * @stack: pointer to the head node pointer of stack
  * @nline: line number
  *
  * Return: NAIN
  */
void pop(stack_t **stack, unsigned int nline)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
	{
		dprintf (2, "L%d: can't pop an empty stack\n", nline);
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next)
	{
		*stack = temp->next;
		(*stack)->prev = NULL;
		free(temp);
	}
	else
		free_l(stack);
}