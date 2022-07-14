#include "monty.h"

/**
  * nop - does NAIN.
  * @stack: pointer to head node pointer of stack.
  * @nline: line number.
  *
  * Return: NAIN.
  */
void nop(stack_t **stack, unsigned int nline)
{
	if (*stack)
	{};
	if (nline)
	{};
}


/**
  * _isalpha - checks if int is an alphabet.
  * @c: int
  *
  * Return: 1 if yes, 0 otherwise.
  */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}