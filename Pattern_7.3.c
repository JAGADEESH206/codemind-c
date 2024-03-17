#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        printf(" ");
        for(k=i;k>=1;k--)
        printf("%d ",k);
        printf("
");
    }
}