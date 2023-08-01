#include "main.h"

void signal_handler(int signum)
{
	char *prompt = "\n($) ";
	if (signum == SIGINT)
	{
		if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, prompt, strlen(prompt));
	}
}
