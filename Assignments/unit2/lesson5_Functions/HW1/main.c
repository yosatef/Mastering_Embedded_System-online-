#include <stdio.h>

/*EX1:prime numbers between two intervals by making user-defined function */

void IntervalsPrimeNumber(int First_num,int Second_num)
{
   int primeArr[100];
   int i,j=0;
   if (First_num<=7)
   {
       primeArr[0]=2;
       primeArr[1]=3;
       primeArr[2]=5;
       primeArr[3]=7;

        j=4;
   }
     for (i=7;i<=Second_num;i++)
     {
         if (i%2!=0 && i %3!=0&&i %5!=0&&i %7!=0)
         {
            primeArr[j]=i;
            j++;
         }
     }

   printf("Prime numbers between %d and %d are: ",First_num,Second_num);
   for(i=0;i<j;i++)
   {
       printf("%d  ",primeArr[i]);
   }
}
int main ()
{
    int num1,num2;
    printf("Enter two numbers(intervals): ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    IntervalsPrimeNumber(num1,num2);
    return 0;
}
