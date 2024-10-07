#include <stdio.h>

int main(){
    int arr[4];
    int max=arr[0];
 
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }

   for (int i = 0; i < 4; i++)
   {
    int pdt=1;
    
    for (int j = i; j < 4; j++)
    {
        pdt=pdt*arr[j];
        if (pdt>max)
        {
            max=pdt;
        }
    }
        
   }
   
 printf("%d",max);

    
    return 0;
}