/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
*EX4:

Write C Program to Multiply two Floating Point Numbers
 */
#include <stdio.h>
#include <stdlib.h>


int main()
{
	float num1,num2,mul=0;
    printf("###########################\n");
	printf("Enter two numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	mul=num1*num2;
	printf("Product: %f",mul);
	return 0;
}
