#include <stdio.h>
#include <stdarg.h>
#include "quit_continue.h"
#include "equation.h"

double add(int num_values, ...);
double subtract(int num_values, ...);
double multiply(int num_values, ...);
double divide(int num_values, ...);

int main()
{
	int num_values;
	double values[100];

	char operation;

	do
	{
		int i;

		printf("Enter the number of values: ");
		scanf("%d", &num_values);

		if (num_values <= 0)
		{
			printf("Invalid number of value\n: ");
			continue; /* go back to the start of the the loop */
		}

		for (i = 0; i < num_values; i++) /* loop to increment the values enterd by user */
		{
			printf("Enter value %d: ", i + 1);
			scanf("%lf", *values[i]);
		}

		printf("Enter an operation (+, -, *, /): ");
		scanf(" %c", &operation);

		double result;

		switch (operation)
		{
			case '+':
				result = add(num_values, values[0], values[1], values[2], ...);
			case '-':
				result = subtract(num_values, values[0], values[1], values[2], ...);
			case '*':
				result = multiply(num_values, values[0], values[1], values[2], ...);
			case '/':
				result = divide(num_values, values[0], values[1], values[2], ...);
				break;
			default:
				printf("Invalid operation\n");
				continue; /* Go back to the start of the loop */
		}
		buildEquation(operation, num_values, values, result); /* Build and print the equation */
	}
	while (askContinue()); /* loop as long as user wants to continue */
	printf("calculator has been closed.\n");
	return (0);
}
