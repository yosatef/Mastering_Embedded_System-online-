#include <stdio.h>
#include <string.h>

/*EX3: reverse a sentence using recursion */

void RversingSentence(char *arr)
{
    if (*arr!= 0)

    {
        RversingSentence(arr+1);
    printf("%c",*arr);
    }


}
int main ()
{
    char Arr[100];
    printf("Enter a Sentence: ");
    gets(Arr);
    RversingSentence(Arr);
    return 0;
}
