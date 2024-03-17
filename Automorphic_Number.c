#include<stdio.h>
#include<math.h>
int main()
{
    int n,b,c,count=0,temp,d;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        d=temp%10;
        count++;
        temp=temp/10;
    }
    b=pow(n,2);
    int g=pow(10,count);
    c=b%g;
    if(c==n)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }

        
    
}