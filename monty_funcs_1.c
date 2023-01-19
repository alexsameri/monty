#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

void push(int value)
{
	if (top == MAX_STACK_SIZE - 1)
	{
		printf("Error: Stack overflow\n");
		exit(EXIT_FAILURE);
	}
	stack[++top] = value;
}

void pall()
{
	if (top == -1)
	{
		return;
	}
	for (int i = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}

int main(int argc, char *argv[])
{
	if (strcmp(argv[1], "push") == 0)
	{
		if (argc != 3)
		{
			printf("L%d: usage push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		int value = atoi(argv[2]);
		push(value);
	}
	else if (strcmp(argv[1], "pall") == 0)
	{
		pall();
	}
	else
	{
		printf("Invalid opcode\n");
		exit(EXIT_FAILURE);
	}
	return 0;
}
