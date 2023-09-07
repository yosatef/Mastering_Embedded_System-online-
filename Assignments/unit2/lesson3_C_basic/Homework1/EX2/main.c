/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
*EX2:

Write C Program to Print a Integer Entered by a User
 */
#include <stdio.h>

int main ()
{
	int x;
	printf("Enter a integer:  ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);
	printf("\n###########################");

	return 0;
}
