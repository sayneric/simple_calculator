#include <stdio.h>
/* file responsible for the end of operations */
int askContinue()
{
	char choice;

	printf("Do you want to perform another calculation? (y/n): ");
	scanf(" %c", &choice);
	return (choice == 'y' || choice == 'Y');
}
