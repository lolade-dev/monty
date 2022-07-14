#include "monty.h"

/**
  * push - pushes node to top of stack.
  * @stack: pointer to head node pointer of stack
  * @nline: line number.
  *
  * Return: NAIN.
  */
void push(stack_t **stack, unsigned int nline)
{
	stack_t *temp;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: stack not found\n", nline);
		exit(EXIT_FAILURE);
	}

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	temp->next = *stack;
	temp->prev = NULL;
	temp->n = arg.arg;
	if (*stack)
		(*stack)->prev = temp;
	*stack = temp;
}