#include "main.h"

/**
 * parse_input - parses input
 * @input: input string
 * @delim: deliminator
 * @num_tokens: number of tokens
 *
 * Return: double pointer
 */
char **parse_input(char *input, const char *delim, int *argc)
{
	char *token, *input_copy;
	int i;
	char **argv;

	input_copy = _strdup(input);
	if (!input_copy)
		error("string duplication error");

	*argc = 0;
	token = strtok(input_copy, delim);
	while (token)
	{
		(*argc)++;
		token = strtok(NULL, delim);
	}

	argv = safe_malloc(sizeof(char *) * (*argc));
	token = strtok(input, delim);
	for (i = 0; token; i++)
	{
		argv[i] = safe_malloc(sizeof(char) * (_strlen(token) + 1));
		_strcpy(argv[i], token);
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;

	free(input_copy);

	return (argv);
}
