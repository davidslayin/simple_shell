#include "shell.h"

/**
 * sigint_handler - doesn't exit in case of Ctrl-C
 * @sig: required for signal function to run properly
 *
 * Description: ignore sig, print newline, print the prompt
 * Call to fflush discards the Ctrl-C
 */
void sigint_handler(int sig)
{
	(void)sig;
	 _putchar('\n');
	 print_prompt();
	 fflush(stdout);
	 exit(EXIT_SUCCESS);
}

/**
 * free_everything - frees arrays of strings
 * @args: array of strings to free
 */
void free_everything(char **args)
{
	int i;

	if (!args)
		return;
}
