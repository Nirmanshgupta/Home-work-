#include<stdio.h>
void main()
{
    int num,fact1=0;
    int fact(int);
    printf("enter the number");
    scanf("%d",&num);s
    fact1=fact(num);
    printf("fact of the number:%d",fact1);
}
int fact (int f){
    if(f==1)
    return 1;
    else 
    return f*fact(f-1);
}