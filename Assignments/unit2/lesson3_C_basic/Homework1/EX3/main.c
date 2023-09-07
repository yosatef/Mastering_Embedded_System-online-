/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
*EX3:

Write C Program to Add Two Integers
 */
#include <stdio.h>

void main()
{
	int num1,num2,sum=0;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d  %d",&num1,&num2);
	sum=num1+num2;
	printf("Sum: %d",sum);
	printf("\n###########################");
}
