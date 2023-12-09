#include <stdio.h>

/*EX4: Calculate the power of a number using recursion */

int NumberPower(int base, int power)
{
    int i,POWER_=1;
    for (i=0;i<power;i++)
    {
       POWER_=base* NumberPower(base,i);
    }
    return POWER_;
}

int main ()
{
    int base , power;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&power);

    int POWER_ = NumberPower(base,power);

    printf ("%d^%d = %d",base,power,POWER_);
    return 0;
}
