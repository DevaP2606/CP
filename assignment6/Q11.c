#include <stdio.h>

int main(){
    int vow=0,cons=0,xtr=0;
    char str[100];
    int i=0;
    gets(str);
while (str[i]!='\0')
{
    
    i=i+1;

}

for (int j = 0; j <=i ; j++)
{
    if (str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
    {
        vow=vow+1;

    }
    else if(str[j]=='\0')
    {
        xtr=xtr+1;
    }
    else
    {
        cons=cons+1;
    }
}
    printf("Vowels: %d\n",vow);
    printf("consonants: %d",cons-xtr);

    
    return 0;
}


