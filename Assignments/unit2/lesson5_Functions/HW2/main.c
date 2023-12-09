#include <stdio.h>

/*EX2: factorial number using recursion */

int FactorialNumber(int Pos_num)
{
   if (Pos_num == 1)
    return 1;

    else
        return Pos_num*FactorialNumber(Pos_num-1) ;

}
int main ()
{
    int num,Factorial=0;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    if (num<=0)
        printf("please enter a positive number");
    else
    {Factorial= FactorialNumber(num);
   printf("\nFactorial of %d = %d",num,Factorial);}
    return 0;
}
