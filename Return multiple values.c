#include<stdio.h>
struct Result
{
    int vagfol;
    int vagshesh;
};
struct Result divide(int a,int b)
{
    return (struct Result){a/b,a%b};
};
int main()
{
    int a=10,b=3;
    struct Result result=divide(a,b);
    printf("%d  %d\n",result.vagfol,result.vagshesh);
}
