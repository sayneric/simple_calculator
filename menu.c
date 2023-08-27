#include "main.h"

/**
 * display_menu - to display the menu to the user
 *
 *
 * return: the menu display
 */

void display_menu(void)
{
	char name[100];
	int n;

	printf(">> Hello, Welcome to simple calculator\n");
	printf(">> What is you name?\n");
	fgets(name, sizeof(name), stdin);

	for(n = 0; name[n] != '\0'; n++)
        {
                name[n] = toupper(name[n]);
        }
        name[strcspn(name, "\n")] = '\0';

	printf("\nOkay, %s ! \n\n", name);
	printf("\x1b[4mThis is the MENU of operations you can perform with me.\x1b[0m\n");
	printf("\x1b[4mPress:\x1b[0m\n");
	printf("1: for ADDITION\n");
	printf("2: for SUBTRACTION\n");
	printf("3: for MULTIPLICATION\n");
	printf("4: for DIVISION\n");	

}

/**
 * operations - the operationa choice the user made.
 *
 *
 * return: the operation the user selected
 */

void operations(void)
{



}
