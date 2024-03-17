#include<stdio.h>
int main()
{
    int n,temp,sum=0,b,count;
    scanf("%d",&n);
    while(n>=10)
    {
        temp=n;
        while(temp>0)
        {
            b=temp%10;
            sum=sum+b;
            temp=temp/10;
        }
        count=sum;
        n=count;
        sum=0;
    }
    printf("%d",count);
}