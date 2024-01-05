#include<stdio.h>
void main()
{
    int average,math,social,tamil,hindi,physics,total;
    printf("no of subject");
    scanf("%d%d%d%d%d%d",&average,&hindi,&tamil,&social,&math,&physics);
    total=math+hindi+social+tamil+physics;
    average=total/5;
    printf("average marks =%d",average);
    if(average>=90 && average<=100)
    {
        printf("grade=a");
    }
     else if (average>=70 && average<=90)
     {
        printf("grade=b");
    }
    else if(average>=60 && average<=70)
    {
        printf("grade=c");
    }
    else {
        printf("fail");
    }
}