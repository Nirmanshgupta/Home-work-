#include<stdio.h>
int fact1(int);
void main(){
    int a,fact;
    printf("\n enter the number to calculate factorial");
    scanf("%d",&a);
    fact=fact1(a);
    printf("\n factorial of %d is %d",a,fact);
}
int fact1(int x){
 if (x<=0)
        return 1;
    
    else
       return x*fact1(x-1);
}
    
