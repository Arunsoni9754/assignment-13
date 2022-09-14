#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    int j=sum(n);
    printf("The sum is %d",j);
}
int sum(int a)
{
    if(a==1)
    {
        return 1;
    }
    return a+sum(a-1);
}
