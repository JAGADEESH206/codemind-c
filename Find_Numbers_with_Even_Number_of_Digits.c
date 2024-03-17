#include<stdio.h>
int main()
{
    int n,i,count=0,sum=0,b;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        while(arr[i]>0)
        {
            b=arr[i]%10;
            count++;
            arr[i]=arr[i]/10;
        }
        if(count%2==0)
        sum++;
        count=0;
    }
    printf("%d",sum);
}