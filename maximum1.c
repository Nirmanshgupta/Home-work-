#include<stdio.h>
void main()
{
    int n,i;
    printf("enter number");
    scanf("%d",&n)
    float num,max;
    for(i=0;i<n;++i){
        printf("enter numbers");
        scanf("%f",&num);
        if( num>max){
            max=num;
        }
        printf("maximum number=%.2f\n",max)
    }
}
