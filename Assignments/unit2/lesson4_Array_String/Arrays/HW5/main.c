#include <stdio.h>
#include <stdlib.h>
/*write c program to search an element in array */

int main ()
{
    int ArrayNum,iterator1,searchededNum,searchedloc;
    int Array[100];

    printf("Enter no of elements: ");
    scanf("%d",&ArrayNum);

    for (iterator1=0;iterator1<ArrayNum;iterator1++)
    {
       scanf("%d",&Array[iterator1]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d",&searchededNum);

     for (iterator1=0;iterator1<ArrayNum;iterator1++)
    {
        if (Array[iterator1]== searchededNum)
        {
            searchedloc=iterator1;
        }
    }

    printf("\nNumber found in the location= %d ",searchedloc+1);
    return 0;

}
