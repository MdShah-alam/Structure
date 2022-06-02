#include<stdio.h>
#include<string.h>

unsigned int binaryToInt(char str[])
{
    unsigned int ans=0;
    int len=strlen(str);
    /**for(int i=len-1,p=1;i>=0;i--,p*=2)
    {
        int bit=str[i]-'0';
       // printf("%d %d %d\n",bit,i,p);
       if(bit==1)
       {
           ans=ans+p;
       }
    }*/
    for(int i=0;i<len;i++)
    {
        int bit=str[i]-'0';
        ans=ans*2+bit;
    }
    return ans;
}
int main()
{
    char str[100];
    gets(str);
    printf("%d",binaryToInt(str));
}
