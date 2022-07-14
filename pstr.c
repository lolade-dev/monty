#include "monty.h"

/**
  * pstr - prints a string from ascii starting from the top.
  * @stack: pointer to the head node pointer of stack
  * @nline: line number
  * Return: NAIN
  */
void pstr(stack_t **stack, unsigned int nline)
{
	stack_t *temp;

	temp = *stack;
	if (num_line)
		while (temp && temp->n != 0 && temp->n > 0 && temp->n < 128)
		{
			printf("%c", temp->n);
			temp = temp->next;
		}
	printf("\n");
}