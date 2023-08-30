#include "main.h"
#include <stdio.h>

// this is the part of the code responsible for building the the equation, the function takes 3 arguments .(1arg) the operation(the arithmetic operation character eg +, 
// (2arg)num_values  thats the number of values involved int the operation
// (3arg) the result of the calculation
void buildEquation(char operation, int num_values, double result)
{
	int i;
	printf("Equation: %.2lf", result);
	for (i = 0; i < num_values; i++)
	{
		printf(" %c %.2lf", operation, values[i]);
	}
	printf("\n");
}
