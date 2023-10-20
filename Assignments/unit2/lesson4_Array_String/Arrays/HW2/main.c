#include <stdio.h>
#include <stdlib.h>
/*write c program to calculate the average using array */


int main ()
{
    float ArrayofNumbers[100];
    int numberOfData =0;
    float Average=0;
    int iterator1;

    printf("Enter the number of data: ");
    scanf("%d",&numberOfData);

    for (iterator1=0;iterator1<numberOfData;iterator1++)
    {
        printf("%d. Enter Number: ",iterator1+1);
        scanf("%f",&ArrayofNumbers[iterator1]);
        printf("\n");

    }

    for (iterator1=0;iterator1<numberOfData;iterator1++)
    {
        Average+=ArrayofNumbers[iterator1];

    }

    Average/=numberOfData;
    printf("Average= %.2f",Average);


    return 0;

}
