#include "main.h"

int main()
{
	char *str = "ls -la";
	char *command;
	int len;
	/*const char *delim = " \n";
	char **argv;*/

	command = get_location(str);
	printf("%s\n", command);
	len = _strlen(command);
	printf("%d\n", len);
	/*argv = parse_input(command, delim, &len);
	
	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}*/

	return (0);
}
