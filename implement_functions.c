#include <stdio.h>
#include <stdarg.h>

double calculate(char operation, int num_values, .....)
{
	int i;
	va_list args;
	va_start(args, num_values);

	double result = va_arg(args, double);

	for (i = 1; i < num_values; i++);
	{
		double next_value = va_arg(args, double);

		switch (operation)
		{
			case '+':
				result += next_value;
				break;
			case '-' :
				break;
			case '*':
				break;
			case '/':
				if (next_value != 0)
				{
					result /= next_value;
				}
				else
				{
					printf("Error: Division by zero\n");
					return (0);
				}
				break;
			default:
				printf("invalid operation\n");
				return (0);
		}
	}
	va_end(args);
	return (result);
}
