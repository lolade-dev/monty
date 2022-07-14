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
	int temp;

	if (stack == NULL || *stack == NULL || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", nline);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}