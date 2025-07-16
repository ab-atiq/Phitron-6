#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct person person1,person2;

    //person1.name={"aitk"};
    int age = person1.age=25;
    float salary = person1.salary=32514.25;

    printf("Age is : %d\n",age);
    //printf("%s",person1.name);
    printf("Salary is : %.2f\n",salary);

    person2.age=29;
    person2.salary=652587.25;

    printf("Age is : %d\n",person2.age);
    printf("Salary is : %.2f",person2.salary);


}
