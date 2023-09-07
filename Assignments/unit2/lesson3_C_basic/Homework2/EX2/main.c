/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
 *EX2:

Write C program to check vowel or consonant.
 */

 #include <stdio.h>

 int main()
 {
     char ch_chk;

	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch_chk);

	switch (ch_chk)
	{
    case 'a':
    case 'e':
    case 'o':
    case 'i':
    case 'u':
    case 'A':
    case 'E':
    case 'O':
    case 'I':
    case 'U':
        	   	printf("\n%c is vowel",ch_chk);
        break;
        default:
                printf("\n%c is consonant",ch_chk);

	}



     return 0;
 }
