#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elemnts: ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {   
        printf("%dst elemnt: ",i+1);
        scanf("%d",&arr[i]);
        

    }
        printf("The reversed order is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[n-i-1]);
    }
    
    
    

    return 0;
}