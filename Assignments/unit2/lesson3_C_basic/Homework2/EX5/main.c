/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
 *EX5:

Write C program to check whether a character is alphabet or not.
 */

 #include <stdio.h>

 int main()
 {
     char ch_chk;

	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch_chk);

	if( (ch_chk >= 'a' && ch_chk <='z')||(ch_chk >='A' && ch_chk <='Z' ))
        printf("\n%c is an alphabet ",ch_chk);
    else
        printf("\n%c is not an alphabet ",ch_chk);






return 0;
	}
