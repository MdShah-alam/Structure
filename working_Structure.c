#include<stdio.h>
#include<string.h>

struct Date
{
    int day;
    int month;
    int year;
};
int days_in_months[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    struct Date start;
    printf("start date :");
    scanf("%d %d %d",&start.day,&start.month,&start.year);
    int days;
    printf("How many days :");
    scanf("%d",&days);
    struct Date nextdate=start;

    if((nextdate.year%4==0&&nextdate.year%100!=0)||(nextdate.year%400==0))
    {
        days_in_months[1]=29;
    }

    for(int i=1; i<=days; i++)
    {
        if(nextdate.day!=days_in_months[nextdate.month-1])
            nextdate.day++;
        else if(nextdate.month!=12)
        {
            nextdate.day=1;
            nextdate.month++;
        }
        else
        {
            nextdate.day=1;
            nextdate.month=1;
            nextdate.year++;
        }
        printf("Next date : %d-%d-%d\n",nextdate.day,nextdate.month,nextdate.year);
    }
}
