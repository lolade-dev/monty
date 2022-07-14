#include "monty.h"

/**
  * pall - prints data of all nodes in stack.
  * @stack: pointer to head node pointer of stack.
  * @nline: line number.
  *
  * Return: nothing.
  */
void pall(stack_t **stack, unsigned int nline)
{
	stack_t *temp;
	(void)nline;

	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}