#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Binary
{
    char str[100];
};
struct Binary to_binary(unsigned int val,int k)
{
    struct Binary ans;
    int idx=0;
    while(val>0)
    {
        int d=val%2;
        val=val/2;
        ans.str[idx]='0'+d;
        idx++;
    }
    for(int i=idx;i<k;i++)
        ans.str[i]='0';
    ans.str[k]=0;
    strrev(ans.str);
    return ans;
}

bool getBit(unsigned int mask,int k)
{
    return (mask & (1<<k))!=0;
}

unsigned int setBit(unsigned int mask,int k)
{
    return mask | (1<<k);
}

unsigned int clearBit(unsigned int mask,int k)
{
    return mask & ~(1<<k);
}

unsigned int flipBit(unsigned int mask,int k)
{
    return mask ^ (1<<k);
}

int main()
{
    int x=54;
    printf("%d= %s\n",x,to_binary(x,8).str);

    for(int i=0;i<8;i++)
    {
        printf("%d th bit : %d\n",i,getBit(x,i));
        printf("Clear :%s\n",to_binary(clearBit(x,i),8).str);
        printf("Set :%s\n",to_binary(setBit(x,i),8).str);
        printf("Flip :%s\n",to_binary(flipBit(x,i),8).str);
    }
}
