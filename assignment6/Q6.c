#include <stdio.h>

int main()
{
    int n , temp;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n] ;
    
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n-1; i++)
        {

            if (arr[i] < arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    printf("The largest is:%d \n",arr[0]);
    printf("The smallest is:%d ",arr[n-1]);

   
    return 0;
}