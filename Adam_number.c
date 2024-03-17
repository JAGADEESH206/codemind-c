#include<stdio.h>
#include<math.h>
int main()
{
    int n,b,rev=0,num=0,c,g,d;
    scanf("%d",&n);
    b=pow(n,2);
    while(n>0)
    {
        c=n%10;
        rev=rev*10+c;
        n=n/10;
    }
    g=pow(rev,2);
    while(g>0)
    {
        d=g%10;
        num=num*10+d;
        g=g/10;
    }
    if(num==b)
    printf("True");
    else
    printf("False");
    
}