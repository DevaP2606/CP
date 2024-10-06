#include <stdio.h>

int main(){
int r;
int c;
printf("Enter rows: ");
scanf("%d",&r);
printf("Enter coloumns: ");
scanf("%d",&c);


int arr[r][c];
int tr[c][r];

int i,j;
 for (int i = 0; i < r; i++)
 {
    for (int j = 0; j < c; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
 }
 printf("You enteres: \n");
 for (int i = 0; i < r; i++)
 {
    for (int j = 0; j < c; j++)
    {
        printf("%d  ",arr[i][j]);
    }
    printf("\n");
    
 }


 for (int p = 0; p < c; p++)
 {
    for (int q = 0; q <r ; q++)
    {
        
        tr[p][q]=arr[q][p];
        
    }
    
    
 }
 printf("Transpose is: \n");
 
 for (int i = 0; i < c; i++)
 {
    for (int j = 0; j < r; j++)
    {
        printf("%d  ",tr[i][j]);
    }
    printf("\n");
    
 }

    


return 0;
}