#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*write c program to find the frequency of characters in string */

int main ()
{
    int ArrayNum,iterator1,repeatedch,freq=0;
    char Array[100];

    printf("Enter a string: ");
    gets(Array);

    printf("\nEnter a character to find frequency : ");
    scanf("%c",&repeatedch);

    for (iterator1=0;Array[iterator1]!='\0';iterator1++)
    {
        if (Array[iterator1]==repeatedch)
        {
            freq++;
        }
    }

    printf("\nfrequency of %c = %d",repeatedch,freq);

    return 0;

}
