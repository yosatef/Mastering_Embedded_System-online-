/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
 *EX1:

Write C program to check whether a number is odd or even.
 */

 #include <stdio.h>

 int main()
 {
     int num_chk;

	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_chk);

	if (num_chk % 2==0)
	   	printf("\n%d is Even",num_chk);
    else
        printf("\n%d is Odd",num_chk);


     return 0;
 }
