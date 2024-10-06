#include <stdio.h>

int main(){
    char str[100];
    int i=0;
    gets(str);
while (str[i]!='\0')
{
    
    i=i+1;

}

for (int j = 0; j <=i ; j++)
{
    printf("%c",str[i-j]);
    
}



    return 0;
}