#include<stdio.h>
int main()
{
    int n,b,temp,sum=0;
    scanf("%d",&n);
    while(n>=10)
    {
        temp=n;
    while(n>0)
    {
        b=n%10;
        sum=sum+b*b;
        n=n/10;
    }
    n=sum;
    sum=0;
}
if(n==1||n==7)
printf("True");
else
printf("False");
}
