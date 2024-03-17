
#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<n;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("%c ",64+i);
        printf("
");
    }
}
