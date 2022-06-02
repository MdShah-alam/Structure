#include<stdio.h>

struct ArrayHolder
{
    int a[100];
    int b[100];
    int sum[100];
};

struct ArrayHolder array_sum(int n)
{
    struct ArrayHolder ans;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ans.a[i]);
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ans.b[i]);
    }
    for(int i=0; i<n; i++)
    {
        ans.sum[i]=ans.a[i]+ans.b[i];
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    struct ArrayHolder ans = array_sum(n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",ans.sum[i]);
    }
}
