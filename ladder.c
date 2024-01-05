#include<stdio.h>
void main()
{
    float a,b,c;
    printf("enter number");
    scanf("%f%f%f",&a,&b,&c);
    int q;
    printf("1=addition,2=subtraction,3=multipcation,4=division");
    scanf("%d",&q);
    if(q==1)
    {
        c=a+b;
        printf("the addition of 2 number is=%f",c);
    }
    else if (q==2)
    {
        c=a-b;
        printf("the subtraction of 2 number is=%f",c);
    }
    else if(q==3){
        c=a*b;
        printf("the multipication of 2 number is=%f",c );
    }
    else if(q==4){
        c=a/b;
        printf("the division of 2 number is=%f",c);
    }
    else 
    {
        printf("something get wrong");
    }
}