#include "main.h"

/**
 * main - simple shell
 * @argc: number of arguments passed to main function
 * @argv: double pointer to arguments in string format
 *
 * Return: 0 (success)
 */
int main()
{
	if (isatty(STDIN_FILENO))
	{
		run_interactive_mode();
	}
	else
	{
		run_non_interactive_mode();
	}
	return (0);
}
