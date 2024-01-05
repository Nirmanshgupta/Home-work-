#include<stdio.h>
void main(){
    int i,number,c=0;
    printf("enter number");
    scanf("%d",&number);
    for(i=2;i<=number/2;i++){
        if(number %i==0){
            c++;
            break;
        }
    }
    if (c==0 && number!=1){
    printf("prime number");
    }
    else {
        printf("not a prime number");
    }
}