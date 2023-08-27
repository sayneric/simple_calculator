#include "main.h"

/* GLOBAL VARIBALES*/

int input;

/**
 * display_menu - to display the menu to the user
 *
 *
 * return: the menu display
 */

void display_menu(void)
{

	printf(">> Hello, Welcome to simple calculator\n");
	printf("\x1b[4mThis is the MENU of operations you can perform with me.\x1b[0m\n");
	printf("\n\x1b[4mPress:\x1b[0m\n");
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
	/* take the operation number from the user*/

	printf("\nEnter the number here:\n");
	scanf("%d", &input);

	switch(input)
	{
		case 1:
		{
			/*printf("\nYou entered %d\n", input);*/
			printf("\n\x1b[4mADDITION\x1b[0m\n");
			break;
		}
		case 2:
		{
			printf("\n\x1b[4mSUBTRACTION\x1b[0m\n");
                        break;
		}
		case 3:
		{
			printf("\n\x1b[4mMULTIPLICATION\x1b[0m\n");
                        break;
		}
		case 4:
		{
			printf("\n\x1b[4mDIVISION\x1b[0m\n");
                        break;
		}
		default:
		{
			  printf("\n\x1b[4mInvalid Input\x1b[0m\n");
			  printf("OPERATION %d: not found!\n", input);
                }
	}


}
