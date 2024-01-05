#include<stdio.h>
#include<string.h>
double add(double a, double b){
    return a+b;
}
double sub(double a,double b){
    return a-b;
}
double prod(double a,double b){
    return a*b;
}
int mod(int a,int b){
    return a%b;
}
double div(double a, double b){
    if(b!=0){
        return a/b;
    }
    else{
        printf("Error!1");
        return 0;
    }
}
int main(){
    char operator;
    double num1,num2,result1,result2,result;
    printf("enter an operator(+,-,*,%%)");
    scanf("%c",&operator);
    printf("\n enter the number 1:");
    scanf("%lf",&num1);
    printf("\n enter the number 2:");
    scanf("%lf",&num2);
    switch(operator){
        case'+':
        result=add(num1,num2);
        break;
        case'-':
        result=sub(num1,num2);
         break;
        case'*':
        result=prod(num1,num2);
         break;
        case'%':
        result=mod(num1,num2);
         break;
        case'/':
        result=div(num1,num2);
         break;
         deafult:
         printf("error : invalid input operator\n");
         result1;
    }
    printf("result:%lf\n",result);
    return 0;
}