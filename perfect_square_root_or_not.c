#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float d;
    scanf("%d",&n);
    d=sqrt(n);
    if(ceil(d)==floor(d))
    printf("True");
    else
    printf("False");
    
}