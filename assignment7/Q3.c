#include <stdio.h>

int main()
{
    int n;
    int b;
    printf("Enter length: ");
    scanf("%d", &n);
    int arr[n];
    b = n / 2;
    int d=0;
    
    for (int i=0 ; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

 
    int temp;

    while(d<n)
    {
            temp=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[d] == arr[j])
            {
                temp++;
            }
        }
        if (temp-1 > b)
        {
            break;
        }
        
        
        d++;
    }
    
    if ((temp-1)<b)
    {
        printf("No such element");
        goto label;
    }
    
    printf(" The Majority occuring elemnt is: %d", arr[d]);

   

label:
    return 0;
}