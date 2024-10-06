// GRADING SYSTEM-->
//     >=90    'E'
//     80 - 89 'A'
//     70 - 79 'B'
//     60 - 69 'C'
//     50 - 59 'D'
//     35 - 49 'P'
//     <40 -  'F'

#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");           
    scanf("%d",&marks);          //input from user
    if (marks>=90)
    {
        printf("You got grade: E ");
    }
    else if(marks>=80)
    {
        printf("You got grade: A ");
    }
    else if(marks>=70)
    {
        printf("You got grade: B ");
    }
    else if(marks>=60)
    {
        printf("You got grade: C ");
    }
    else if(marks>=50)
    {
        printf("You got grade: D ");
    }
    else if(marks>=40)
    {
        printf("You got grade: P ");
    }
    else if(marks<40)
    {
        printf("You got grade: F ");
    }
    
    return 0;
}