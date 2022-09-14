#include<stdio.h>
int fibo(int);
int main()
{
    int n,i;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("%d ",fibo(i));
    }
}
int fibo(int a)
{
    if (a==1||a==2)
    {
        return 1;
    }
    return(fibo(a-1)+fibo(a-2));
    
}
