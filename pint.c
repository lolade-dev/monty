#include "monty.h"

/**
  * pint - prints value at top of stack
  * @stack: pointer to the head node pointer of stack
  * @nline: line number
  * Return: NAIN
  */
void pint(stack_t **stack, unsigned int nline)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
	{
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		dprintf (2, "L%u: can't pint, stack empty\n", nline);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", temp->n);
}