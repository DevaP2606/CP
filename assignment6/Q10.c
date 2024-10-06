#include <stdio.h>

int main()
{
   int row1, col1;
   int row2, col2;
   printf("Enter rows and coloumn of matrix 1: ");
   scanf("%d %d", &row1, &col1);

   int arr1[row1][col1];
   for (int i = 0; i < row1; i++)
   {
      for (int j = 0; j < col1; j++)
      {
         scanf("%d", &arr1[i][j]);
      }
   }
   printf("You entered m1: \n");
   for (int i = 0; i < row1; i++)
   {
      for (int j = 0; j < col1; j++)
      {
         printf("%d  ", arr1[i][j]);
      }
      printf("\n");
   }

   printf("Enter rows and coloumn of matrix 2: ");
   scanf("%d %d", &row2, &col2);
   int arr2[row2][col2];
   for (int i = 0; i < row2; i++)
   {
      for (int j = 0; j < col2; j++)
      {
         scanf("%d", &arr2[i][j]);
      }
   }
   printf("You entered m2: \n");
   for (int i = 0; i < row2; i++)
   {
      for (int j = 0; j < col2; j++)
      {
         printf("%d  ", arr2[i][j]);
      }
      printf("\n");
   }


int sum=0;
int arr3[row1][col2];
   for (int i = 0; i < row1; i++)
   {
      for (int j = 0; j < col2; j++)
      {
        arr3[i][j]=0;
        for (int k = 0; k <col1 ; k++)
        {
         arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
        }
        
      }
   }



printf("reutllt: \n");
   for (int i = 0; i < row1; i++)
   {
      for (int j = 0; j < col2; j++)
      {
         printf("%d  ", arr3[i][j]);
      }
      printf("\n");
   }

   return 0;
}