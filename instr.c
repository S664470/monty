#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isvalidinstruc(const char *instruction)
{
	size_t nIns, i;

	const char *validInstrus[] = {"push", "pall", "print", "pop", "swap", "add",
		"nop", "sub", "div", "mul", "mod", "comments", "pchar", "pstr", "rotl", "ststack", "queue", "printf"};

	nIns = sizeof(validInstrus);

	for (i = 0; i < nIns; i++)
		if (validInstrus[i] == NULL)
				printf("L<line_number>: unknown instruction <opcode>");
				return (EXIT_FAILURE);


		
		return 0;
}
