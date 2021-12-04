#include<stdio.h>
#include<conio.h>
struct Person
{
    char name[50];
    int age;
    float salary;
};
void display(struct Person p)
{
    printf("Name=%s\n",p.name);
    printf("Age=%d\n",p.age);
    printf("Salary=%.2f\n",p.salary);
}
int main()
{
    struct Person person1;
    strcpy(person1.name,"shah-alam");
    person1.age=21;
    person1.salary=3487534.5634;
    display(person1);
    getch();
}
