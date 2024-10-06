#include <stdio.h>

int main(){
    char str[100];
    int p=0;
    printf("eneter: ");
    gets(str);

   
   
   
   for (int i = 0; i < 100; i++)
   {
        if (str[i]=='\0')
        {
            break;
        }
        else{
            p=p+1;
        }
        
   }
   printf("%d",p);

   
   

    return 0;
}