#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*write c program to find the length of string */

int main ()
{
    int ArrayNum,iterator1,stringlength=0;
    char Array[100];

    printf("Enter a string: ");
    gets(Array);


    for (iterator1=0;Array[iterator1]!='\0';iterator1++)
    {
            stringlength++;

    }

    printf("\nlength of string: %d",stringlength);

    return 0;

}
