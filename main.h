#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

int execmd(char **argv);
char *get_location(char *command);
char *allocate(int n);
void _puts(char *str);
int num_token(char *str, const char *delim);
char **alloc_argv(int n);

void run_non_interactive_mode();
void run_interactive_mode();
void cleanup(char **argv);
void error(char *msg);
void *safe_malloc(size_t size);
char **parse_input(char *input, const char *delim, int *num_tokens);
void execute(char **argv, char **env);

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strncat(char *dest, char *src, int n);
char *_strdup(char *str);

int divider(char *s, const char *c);
size_t _getline(char **file_1, size_t *n);
int _putchar(char c);

#endif /* _MAIN__H_ */
