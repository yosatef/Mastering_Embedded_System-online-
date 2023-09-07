/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
 *EX4:

Write C program to check a number whether positive or negative .
 */

 #include <stdio.h>

 int main()
 {
     float num_chk;

	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num_chk);

	if(num_chk>0)
        printf("\n%.2f is positive number ",num_chk);
    else if(num_chk<0)
        printf("\n%.2f is negative number ",num_chk);
    else
        printf("\nyou entered zero");





return 0;
	}
