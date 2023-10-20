#include <stdio.h>
#include <stdlib.h>
/*write c program to insert an element in array */

int main ()
{
    int ArrayNum,iterator1,InsertedNum,InsertedLoc,iterator2;
    int Array[100];

    printf("Enter no of elements: ");
    scanf("%d",&ArrayNum);

    for (iterator1=0;iterator1<ArrayNum;iterator1++)
    {
       scanf("%d",&Array[iterator1]);
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d",&InsertedNum);

    printf("\nEnter the location: ");
    scanf("%d",&InsertedLoc);

     for (iterator1=0;iterator1<=ArrayNum;iterator1++)
    {
        if (iterator1+1==InsertedLoc)
        {
                 for (iterator2=ArrayNum;iterator2>=InsertedLoc;iterator2--)
                 {
                     Array[iterator2]= Array[iterator2-1];
                 }
        }
    }
    Array[InsertedLoc-1]=InsertedNum;

    for (iterator1=0;iterator1<ArrayNum+1;iterator1++)
    {
       printf("%d\t",Array[iterator1]);
    }
    return 0;

}
