#include "monty.h"

/**
  * _push - pushes node to top of stack.
  * @stack: pointer to head node pointer of stack
  * @nline: line number.
  *
  * Return: NAIN.
  */
void _push(stack_t **stack, unsigned int nline)
{
	stack_t *temp;

	_verify2(stack, nline);
	if (global.token)
	{
		temp = malloc(sizeof(stack_t));
		if (temp == NULL)
		{
			fputs("Error: malloc failed\n", stderr);
			exit(EXIT_FAILURE);
		}
		temp->n = global.num, temp->next = NULL;
		temp->prev = NULL;
		if (*stack)
		{
			if (global.flag == 1)
			{
				temp->next = *stack;
				(*stack)->prev = temp;
				*stack = temp;
			}
			else
			{
				while ((*stack)->next)
					*stack = (*stack)->next;
				(*stack)->next = temp, temp->prev = *stack;
				while ((*stack)->prev)
					*stack = (*stack)->prev;
			}
		}
		else
			*stack = temp;
	}
	else
	{
		free(global.line), fclose(global.fil);
		dprintf(2, "L%u: usage: push integer\n", nline);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
