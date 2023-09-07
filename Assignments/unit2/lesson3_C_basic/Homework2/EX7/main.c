/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
 *EX7:

Write C program to find a factorial of number.
 */

 #include <stdio.h>

 int main()
 {
     int num,fac=1,i;

	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	if(num<0)
        printf("\nError!!!factorial of negative number does not exist");
    else
    {
        for(i=1;i<=num;i++)
    {
        fac*=i;
    }
    printf("\nfactorial = %d",fac);
    }

return 0;
	}
