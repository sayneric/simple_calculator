#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void display_menu(void);
void operations(void);
void buildEquation(char operation, int num_values, double result);
/* for operation */
double add(int num_values, ...);
double subtract(int num_values, ...);
double multiply(int num_values, ...);
double divide(int num_values, ...);


int askContinue();

#endif
