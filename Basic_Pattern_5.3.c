#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=i;k>=1;k--)
        {
            printf("%d",i);
        }
        for(j=i;j<n;j++)
        {
            printf("*");
        }
        printf("
");
    }
}