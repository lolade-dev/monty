#include "monty.h"

/**
  * get_op_func - searches and matches text to opcode
  * then returns corresponding function.
  * @num_line: struct containing line content and number.
  * @tokens: struct containing all allocated memory.
  *
  * Return: pointer to relevant function.
  */
void (*func(char *tokens))(stack_t **stack, unsigned int num_line)
{
	instruction_t ops[] = {
		{"push", _push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"stack", _stack},
		{"queue", _queue},
		{"err", _error},
		{"#", nop},
		{NULL, NULL}};
	int i = 0;
	int opc;

	while (i < 19)
	{
		opc = strcmp(ops[i].opcode, tokens);
		if (opc == 0)
			return (ops[i].f);
		i++;
	}

	return (ops[17].f);
}