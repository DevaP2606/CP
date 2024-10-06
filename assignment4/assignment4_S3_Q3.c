#include <stdio.h>

int main(){
   
    float  incm,tax;
    printf("Enter income: ");
    scanf("%f",&incm);
    if (incm<5000)
    {
        tax=0;
    }
    else if (incm<6000)
    {
        tax=(0.10)*(incm-5000);
    }
    else if (incm<15000)
    {
        tax=100+(0.20)*(incm-6000);
    }
    else if (incm>=15000)
    {
        tax=1900+(0.30)*(incm-15000);
    }
    else 
    {
        printf("enter correct data");
    }


    printf("The Tax is Rs%.2f",tax);  
    
    return 0;
}