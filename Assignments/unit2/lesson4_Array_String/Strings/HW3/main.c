#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*write c program to reverse string */

int main ()
{
    int ArrayNum,iterator1,reverscount=0;
    char Array[100];
    char ArrayReversed[100];
    char temp;
    printf("Enter the string: ");
    gets(Array);


    for (iterator1=strlen(Array)-1;iterator1>=0;iterator1--)
    {

       temp=Array[iterator1];
       ArrayReversed[reverscount]=temp;
       reverscount++;

    }
ArrayReversed[reverscount]='\0';
    printf("\nReverse string is: %s",ArrayReversed);

    return 0;

}
