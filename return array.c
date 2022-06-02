#include<stdio.h>

int *makeNarray(int n)
{
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
       a[i]=i+1;
    }
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int *a=makeNarray(n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
