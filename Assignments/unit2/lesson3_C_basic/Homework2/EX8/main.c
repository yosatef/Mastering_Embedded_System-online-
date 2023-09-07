/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Youstina Atef
 *EX8:

Write C program to make a simple calculator.
 */

 #include <stdio.h>

 int main()
 {
     float num1,num2,result;
     char oper;
	printf("Enter an operator either + or - or * or divide: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&oper);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num1);
    scanf("%f",&num2);

    switch (oper)
    {
    case '+':
        result=num1+num2;
        break;
    case '-':
        result=num1-num2;
        break;
    case '*':
        result=num1*num2;
        break;
    case '/':
        result=num1/num2;
        break;
    }
	printf("%.1f %c %.1f = %.1f ",num1,oper,num2,result);

return 0;
	}
