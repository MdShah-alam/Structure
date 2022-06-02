#include<stdio.h>
#include<string.h>

char* strrev(char* str)
{
    if(!str || !*str)
        return str;
    int i=strlen(str)-1,j=0;
    char ch;
    while(i>j)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i--;
        j++;
    }
    return str;
}

void to_binary(unsigned int val,char str[],int k)
{
    int idx=0;
    while(val>0)
    {
        int d=val%2;
        val=val/2;
        str[idx]='0'+d;
        idx++;
    }
    for(int i=idx;i<k;i++)
        str[i]='0';
    str[k]=0;
    strrev(str);
}

int main()
{

    unsigned int x=10;
    unsigned int y=35;
    char sx[100],sy[100],snot[100];

    to_binary(x,sx,8);
    to_binary(y,sy,8);

    printf("sx= %s\n",sx);
    printf("sy= %s\n",sy);

    unsigned int not=~y;
    to_binary(not,snot,8);

    printf("not =%d\n",not);
    printf("snot =%s\n",snot);

}
