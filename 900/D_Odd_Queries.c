#include <stdio.h>

void coopy(int n,int arr[n],int copy [n])
{
    for(int i=0;i<n;i++)
    {
        copy[i]=arr[i];
    }
}

int summ(int n,int copy[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + copy[i];
    }
    return sum;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,q,l,r,k;
        scanf("%d %d",&n,&q);
        int arr[n],copy[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        while(q--)
        {
            coopy(n,arr,copy);
            scanf("%d %d %d",&l,&r,&k);
            for(int i=l-1;i<r;i++)
            {
                copy[i]=k;
            }
            int sum=summ(n,copy);
            if(sum%2==0) printf("NO\n");
            else printf("YES\n");
        }
    }
    return 0;
}