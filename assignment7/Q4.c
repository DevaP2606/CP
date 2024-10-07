#include <stdio.h>

int main(){
    char str1[10];
    gets(str1);
    char str2[10];
    gets(str2);

int temp;


for (int i = 0; i <10; i++)
{
    

    if (str1[i]==str2[i])
    {
         temp=str1[i];
    }
    
    
}




    return 0;
}