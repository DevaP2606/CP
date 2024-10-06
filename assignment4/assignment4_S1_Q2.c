#include <stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    float dist;
    printf("Enter coordinates: ");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    dist=sqrt(pow((a-c),2)+pow((b-d),2));
    printf("%.2f",dist);

    return 0;
}