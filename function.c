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

/* DIVISION */
