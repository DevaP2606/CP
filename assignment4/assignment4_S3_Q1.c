 #include <stdio.h>
 
 int main(){
    int X,Y;
    scanf("%d",&X);

    if (10<X && X<30)
    {
        Y=X+10;
    }
    else if(50<X && X<70)
    {
        Y=3*X;
    }
    else{
        Y=X-2;
    }
    printf("Y is %d",Y);

    return 0;
 }