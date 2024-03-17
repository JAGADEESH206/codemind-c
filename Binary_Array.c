#include<stdio.h>
int main()
{
    int n,i,j,flag=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]!=0&&arr[i]!=1)
        {
            flag=0;
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}