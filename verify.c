#include "monty.h"
/**
 * _verify1 - verify function
 * @num: number
 * Return: always 0
 */
int _verify1(char *num)
{
	int temp = 0;

	if (!num)
		return (1);

	if (num[temp] == 45)
		temp++;
	while (num[temp])
	{
		if (num[temp] < 48 || num[temp] > 57)
			return (-1);
		temp++;
	}
	return (0);
}

/**
 * _verify2 - verify 2 function
 * @stack: head
 * @con: integer
 */
void _verify2(stack_t **stack, unsigned int con)
{
	if (_verify1(global.token) == 0)
		global.num = atoi(global.token);
	else
	{
		dprintf(2, "L%u: usage: push integer\n", con);
		free_l(stack);
		free(global.line);
		fclose(global.fil);
		exit(EXIT_FAILURE);
	}
}