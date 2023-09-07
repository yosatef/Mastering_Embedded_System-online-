/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
 *EX3:

Write C program to find the largest number among three numbers .
 */

 #include <stdio.h>

 int main()
 {
     float num1,num2,num3,largest_num;

	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num1);
	scanf("%f",&num2);
	scanf("%f",&num3);

	if(num1>num2)
    {
        if(num1>num3)
            largest_num=num1;
    }
    else if (num2>num3)
        largest_num=num2;
    else
        largest_num=num3;
    printf("\nlargest number = %.2f",largest_num);

return 0;
	}
