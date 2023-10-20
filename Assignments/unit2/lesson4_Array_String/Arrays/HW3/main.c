#include <stdio.h>
#include <stdlib.h>
/*write c program to transpose a matrix */

int main ()
{
    int rows,columns,iterator1,iterator2;
    int Array[100][100],TransArray[100][100];

    printf("Enter rows and columns of matrix: ");
    scanf("%d",&rows);
    scanf("%d",&columns);

    printf("\nEnter elements of matrix ");
    for (iterator1=0;iterator1<rows;iterator1++)
    {
            for (iterator2=0;iterator2<columns;iterator2++)
            {
                printf("\nEnter elements a%d%d: ",iterator1+1,iterator2+1);
                scanf("%d",&Array[iterator1][iterator2]);
            }
    }
    printf("\nEntered of matrix\n");
    for (iterator1=0;iterator1<rows;iterator1++)
    {
            for (iterator2=0;iterator2<columns;iterator2++)
            {
                printf("%d \t",Array[iterator1][iterator2]);
            }
        printf("\n");
    }
    printf("\nTranspose of matrix\n");
    for (iterator1=0;iterator1<columns;iterator1++)
    {
            for (iterator2=0;iterator2<rows;iterator2++)
            {
                TransArray[iterator1][iterator2]=Array[iterator2][iterator1];
                printf("%d \t",TransArray[iterator1][iterator2]);
            }
        printf("\n");
    }


    return 0;

}
