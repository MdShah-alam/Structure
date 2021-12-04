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
    struct Person person1,person2;
    printf("Enter the information of person1 :");
    printf("\nEnter the name :");
    gets(person1.name);
    printf("Enter Age =");
    scanf("%d",&person1.age);
    printf("Enter the salary :");
    scanf("%f",&person1.salary);

    printf("\nInformation of person1 \n");
    printf("Name=%s\n",person1.name);
    printf("Age=%d\n",person1.age);
    printf("salary=%.2f\n",person1.salary);

    printf("\nEnter the information of person2 :");
    printf("\nEnter the name :");
    scanf("%s",person2.name);
    printf("Enter Age =");
    scanf("%d",&person2.age);
    printf("Enter the salary :");
    scanf("%f",&person2.salary);

    printf("\nInformation of person2 \n");
    printf("Name=%s\n",person2.name);
    printf("Age=%d\n",person2.age);
    printf("salary=%.2f\n",person2.salary);
    getch();
}
