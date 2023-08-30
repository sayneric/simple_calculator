#include "main.h"

/* ADDITION */
int add(int count, ...)
{

    va_list numbers;
    int result;
    int i;
    va_start(numbers, count);

    result = 0;
    
    /* accessing all members of the list*/
    for (i = 0; i < count; i++){
        result = result + va_arg(numbers, int);
    }

    /*while((value = va_arg(numbers, int)) != 0)
    {
	    result += value;
    }*/
    
    va_end(numbers);
    return (result);
}


/* SUBTRACTION */
int sub(int count, ...)
{
	va_list numbers;
	int result;
	int i;

	va_start(numbers, count);

	result = va_arg(numbers, int);

	for (i = 1; i < count; i++)
	{
		result -= va_arg(numbers, int);
	}

	va_end(numbers);
	return(result);
}


/* MULTIPLICATION */
int multiply(int count, ...) 
{
	va_list numbers;
	int result = 1; /*Initialize with 1 for multiplication*/
        int i;
	va_start(numbers, count);

	/* accessing all members of the list */
	for (i = 0; i < count; i++) {
		result *= va_arg(numbers, int);
	}

	va_end(numbers);
	return result;
}

/* DIVISION */
double divide(int count, ...) 
{
    va_list numbers;
    double result;
    int i;
    double next_value;
    va_start(numbers, count);

    result = va_arg(numbers, double); /*Initialize with the first value*/

    /* accessing all members of the list (starting from the second value) */
    for (i = 1; i < count; i++) 
    {
        next_value = va_arg(numbers, double);
        
        if (next_value != 0) {
            result /= next_value;
        } else {
            printf("Error: Division by zero\n");
            va_end(numbers);
            return 0.0;
        }
    }

    va_end(numbers);
    return result;
}
