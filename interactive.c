#include "main.h"

void run_interactive_mode()
{
	char *prompt = "$";
	char *input = NULL, *input_cpy;
	char **argv;
	const char *delim = " \n";
	ssize_t nchars_read;
	extern char **environ;
	char **env = environ;
	size_t n = 0;
	int num_tokens;

	while (1)
	{
		_puts(prompt);
		nchars_read = getline(&input, &n, stdin);
		if (nchars_read == -1)
		{
			printf("bye bye \n");
			exit(1);
		}
		input_cpy = allocate(nchars_read);
		_strcpy(input_cpy, input);

		argv = parse_input(input, delim, &num_tokens);

		num_tokens = num_token(input_cpy, delim);
		if (num_tokens != 2)
		{
			perror("many tokens");
		}
		else
		{
			execute(argv, env);
		}
		cleanup(argv);
	}
	free(input);
}
