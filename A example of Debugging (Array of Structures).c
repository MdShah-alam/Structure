#include<stdio.h>
#include<string.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Student
{
    char * name[100];
    int class;
    int roll;
    struct Date dob;
};
void  printDate(struct Date date)
{
    printf("%d-%d-%d\n",date.day,date.month,date.year);
}
struct Date inputdate()
{
    struct Date date;
    scanf("%d %d %d",&date.day,&date.month,&date.year);
    return date;
};
void printstudent(struct Student st)
{
    printf("Name : %s\n",st.name);
    printf("Class : %d\n",st.class);
    printf("Roll : %d\n",st.roll);
    printf("DOB : ");
    printDate(st.dob);
}
struct Student inputStudent()
{
    struct Student st;
    printf("Name : ");
    gets(st.name);
    gets(st.name);

    printf("Class : ");
    scanf("%d",&st.class);
    printf("Roll : ");
    scanf("%d",&st.roll);

    printf("DOB : ");
    st.dob=inputdate();

    return st;
};
int main()
{
    int n;
    printf("Numbers of student in class :");
    scanf("%d",&n);
    struct Student students[n];
    for(int i=1; i<=n; i++)
    {
        printf("Input student %d Info\n",i);
        students[i-1]=inputStudent();
    }

    for(int i=1; i<=n; i++)
    {
        printf("Input student %d Info\n",i);
        printstudent(students[i-1]);
    }
}
