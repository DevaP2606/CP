#include <stdio.h>

int main(){
    int n,del;
    printf("Enter the number of elemnts: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%dst element: ",i+1);
        scanf("%d",&arr[i]);
    }
    

    printf("Enter the position of the elemnt to be deleted: ");
    scanf("%d",&del);

    int updated[n-1];
    for (int i = 0; i < n; i++)
    {   
        if(i!=del-1)
        {
        updated[i]=arr[i];

        }
        else{
            continue;
        }
    }


    for (int i = 0; i < n; i++)
    {
        if(i==del-1)
        {
            continue;
        }
        else{
            printf("%d\n",updated[i]);

        }
    }
    
    
    return 0;
}