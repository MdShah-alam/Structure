#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Student
{
    int day1;
    int month1;
    int year1;
};
int days_in_months[12]= {31,28,31,30,31,30,31,31,30,31,30,31};

bool isBirthday(struct Date date, struct Student st)
{
    if((date.year%4==0 && date.year%100!=0)||(date.year%400==0))
    {
        days_in_months[st.month1-1]=29;
        if(st.year1<=date.year)
        {
            if(days_in_months[st.month1-1]==date.day && st.month1==date.month)
            {
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }
    if(st.year1<=date.year)
    {
        if(days_in_months[st.month1-1]==date.day && st.month1==date.month)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}
int main()
{
    struct Date date;
    struct Student st;

    printf("Enter your birthday dd-mm-yy:");
    scanf("%d %d %d",&st.day1,&st.month1,&st.year1);

    printf("Enter a date dd-mm-yy:");
    scanf("%d %d %d",&date.day,&date.month,&date.year);

    if(isBirthday(date,st))
    {
        printf("Happy birthday");
    }
    else
        printf("Not happy birthday");
}
