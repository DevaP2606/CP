#include <stdio.h>
int flag=0;

int prime(int a)
{
    int a, i;
   

    if(a==1)
    {
        printf("The Number is niether prime nor composite");
        goto label;
    }
    else if(a==2)
    {
        flag=1;
        goto label;
    }

    else{

    for (int i = 2; i < a - 1; i++)
    {
        if (a % i == 0)
        {
            flag=0;
            goto label;
        }
    }
    }

    flag=1;



label:
    printf("%d",flag);

}

int main()
{
 int in,c;
 printf("Enter any number: ");
 scanf("%d",&in);

 for (int i =3; i < in; i++)
 {
    c=in-prime
 }
 
    return 0;
}