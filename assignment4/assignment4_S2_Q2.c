#include <stdio.h>

int main(){
    
    int max,a;
    max=-1;
    for (int i = 1; i < 5; i++)
    {
        printf("Enter %dst number: ",i);
        scanf("%d",&a);
        if (a>max)
        {
            max=a;
        }
        else
        {
            continue;
        }
        
    }
    printf("The largest is: %d",a);
    
    return 0;
}