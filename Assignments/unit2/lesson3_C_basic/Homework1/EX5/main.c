/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
*EX5:

Write C Program to Find ASCII Value of a Character
 */

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of %c = %d \n",ch,ch);
	printf("#############################");
return 0;
}
