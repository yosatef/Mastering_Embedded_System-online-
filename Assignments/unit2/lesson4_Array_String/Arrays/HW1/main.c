
#include <stdio.h>
#include <stdlib.h>
/*write c program to find sum of two matrix of order 2*2 */


int main()
{
  float Array1[2][2];
  float Array2[2][2];
  float Sum[2][2];

  int iterator1,iterator2;

  printf("Enter the elements of 1st matrix");

  for (iterator1=0;iterator1<2;iterator1++)
  {
        for (iterator2=0;iterator2<2;iterator2++)
        {
            printf("\nEnter a%d%d: ",iterator1+1,iterator2+1);
            scanf("%f",&Array1[iterator1][iterator2]);
        }

  }
  printf("\nEnter the elements of 2st matrix");

  for (iterator1=0;iterator1<2;iterator1++)
  {
        for (iterator2=0;iterator2<2;iterator2++)
        {
            printf("\nEnter a%d%d: ",iterator1+1,iterator2+1);
            scanf("%f",&Array2[iterator1][iterator2]);
        }

  }

  printf("\nSum of matrix\n");

  for (iterator1=0;iterator1<2;iterator1++)
  {
        for (iterator2=0;iterator2<2;iterator2++)
        {
            Sum[iterator1][iterator2]= Array1[iterator1][iterator2] + Array2[iterator1][iterator2];
            printf("%.1f \t ",Sum[iterator1][iterator2]);
        }
      printf("\n");
  }

    return 0;
}
