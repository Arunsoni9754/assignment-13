#include<stdio.h>
int power(int,int);
int main()
{
    int a,b;
    printf("Enter the base ");
    scanf("%d",&a);
    printf("Enter the power ");
    scanf("%d",&b);
    printf("The answer is %d",power(a,b));
}
int power(int i,int j)
{
    if(j==0){
        return 1;
    }
    return i*power(i,j-1);
}
