#include<stdio.h>
#include<stdbool.h>

int is_reverse_sort(int n,int a[])
{
    int count ;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            count=0;
            if(a[i]>a[j])
            {
                count++;
            }
        }
    }
    if(count==1)
        return true;
    else
        return false;
}

int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return *a,*b;
}
void reverse_sort(int n, int a[])
{
    for(int steps=0; steps<n; steps++)
    {
        for(int i=steps+1; i<n; i++)
        {
            if(a[steps]<a[i])
            {
            swap(&a[steps],&a[i]);
            }
            printf("steps %d\n",steps);
            printf("swap %d and %d\n",i,i+1);
            for(int i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n\n");

        }
        if(is_reverse_sort(n,a)==true)
        {
            printf("true\n");
            break;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    reverse_sort(n,a);
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
