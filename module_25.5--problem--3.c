#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Date
{
    int day;
    int month;
    int year;
};
int days_in_months[12]= {31,28,31,30,31,30,31,31,30,31,30,31};

bool  is_valid_date(struct Date date)
{
    if((date.year%4==0&&date.year%100!=0)||(date.year%400==0))
    {
        days_in_months[date.month-1]=29;
        if(date.month>=1 && date.month<=12)
        {
            if(date.day>=1 && date.day<=days_in_months[date.month-1])
            {
                return true;
            }
            else
                return false;
        }
        else
            false;
    }
    else
    {
        if(date.month>=1 && date.month<=12)
        {
            if(date.day>=1 && date.day<=days_in_months[date.month-1])
            {
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }
}
int main()
{
    struct Date date;
    printf("dd-mm-yy : ");
    scanf("%d %d %d",&date.day,&date.month,&date.year);
    is_valid_date(date);

    if(true)
        printf("true");
    else
        printf("false");
}
