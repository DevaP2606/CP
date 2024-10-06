#include <stdio.h>

int main(){

    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    int cpy[n];

for (int i = 0; i < n; i++)
{
    printf("Element %d :",i+1);
    scanf("%d",&arr[i]);
    cpy[i]=arr[i];
}
printf("The second array is: ");
for (int i = 0; i < n; i++)
{
    printf("%d ",cpy[i]);
}



    return 0;
}