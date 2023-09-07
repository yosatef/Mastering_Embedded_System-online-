/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
 *EX6:

Write Source Code to Swap Two Numbers
 */

#include <stdio.h>

void main ()
{
	float a,b,c;

	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swapping, value of a = %.2f",a);
	printf("\nAfter swapping, value of b = %.2f",b);

}
