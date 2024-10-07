#include <stdio.h>
#include<string.h>

int main(){
    char arr[100];
    printf("Enter string: ");
    gets(arr);
    int n;
    n=strlen(arr);
    char r;
    printf("Enter charactter to remove: ");
    scanf("%c",&r);

    for (int i = 0; i < n; i++)
    {

        if (arr[i]==r)
        {
            continue;
        }
        printf("%c",arr[i]);
        
    }
    


    return 0;
}