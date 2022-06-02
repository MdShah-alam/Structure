#include<stdio.h>
#include<string.h>

void to_binary(unsigned int val,char str[])
{
    int idx=0;
    while(val>0)
    {
        int d=val%2;
        val=val/2;
        printf("%d\n",d);
        str[idx]='0'+d;
        idx++;
    }
    str[idx]='\0';
}
int main()
{
    char str[100];
    unsigned int v;
    scanf("%d",&v);
    to_binary(v,str);
    strrev(str);
    printf("%s\n",str);
}
