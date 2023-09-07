/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
 *EX6:

Write C program to calculate sum of natural numbers.
 */

 #include <stdio.h>

 int main()
 {
     int numbers,sum=0,i;

	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&numbers);

	for(i=0;i<=numbers;i++)
    {
        sum+=i;
    }
    printf("\nsum = %d",sum);
return 0;
	}
