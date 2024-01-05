#include<stdio.h>
void main(){
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if (age>=18 && age<=50)
    {
         if(age>=18 && age<=25)
        {
        printf("eligible for grade1 job");
        }
        else 
        {
        printf("eligilbe for grade2 job");
        }
    }
        else 
        {
            printf("you are not eligible for job");
        }
    }
