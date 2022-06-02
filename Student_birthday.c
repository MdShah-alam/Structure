#include<stdio.h>
#include<string.h>

struct Student
{
    int day;
    int month;
    int year;
};
void calendar(int dd,int yy,int mm)
{
    int day_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};

    int day;
    scanf("%d",&day);
    for(int i=dd;i<=day;i++)
    {

    }
}
int main()
{
    int dd,mm,yy;
    scanf("%d %d %d",&dd,&mm,&yy);
    printf("%d-%d-%d\n",dd,mm,yy);
    if(yy%400==0 ||(yy%100!=0 && yy%4==0))
        printf("Leap year\n");
        else
            printf("Not leap year\n");
        calendar(dd,yy,mm);
}
