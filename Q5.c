#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    
    printf("The sum is %d",sum(n));
}
int sum(int a)
{
    
    if(a/10==0)
    {
        return(a);
        }    return (a%10+sum(a/10));
    
    
}
