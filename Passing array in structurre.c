#include<stdio.h>
#include<conio.h>
struct Person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
 struct Person person[5];
 int i;
 for(i=0;i<5;i++)
 {
     printf("Enter the information of person %d\n",i+1);
     printf("Enter name=");
     fflush(stdin);
     gets(person[i].name);
     printf("Enter age=");
     scanf("%d",&person[i].age);
     printf("Enter salary=");
     scanf("%f",&person[i].salary);
 }
  for(i=0;i<5;i++)
 {
     printf("\n\nEnter the information of person %d\n",i+1);
     printf("Name=%s\n",person[i].name);
     printf("Age=%d\n",person[i].age);
     printf("Salary=%.2f",person[i].salary);
 }
  getch();
}
