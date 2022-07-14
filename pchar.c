#include "monty.h"

/**
  * pchar - prints char at top of stack
  * @stack: pointer to the head node pointer of stack
  * @nline: line number
  * Return: NAIN
  */
void pchar(stack_t **stack, unsigned int nline)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
	{
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		dprintf (2, "L%u: can't pchar, stack empty\n", nline);
		exit(EXIT_FAILURE);
	}
	if (temp->n >= 128 || temp->n < 0)
	{
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		dprintf (2, "L%d: can't pchar, value out of range\n", nline);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}