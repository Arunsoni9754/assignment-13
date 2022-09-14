#include<stdio.h>
int fact(int);
int main()
{int a=1,r=0;  
printf("Enter the number ");
    scanf("%d",&r);
    printf("the factorial is  %d",fact(r));
    return 0;
}
int fact(int a)
{
    if(a==1)
    {return 1;}
    return a*fact(a-1);
}
