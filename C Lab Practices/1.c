#include<stdio.h>
struct Employee
{
    char name[30];
    int id, salary;
};



int main()
{
    int n = 3;
    printf("Enter Number of Employess = ");
    scanf("%d", &n);
    
    struct Employee employees[n];
    for (int i = 1; i <= n; i++)
    {
        printf("Name = ");
        scanf(" %[^\n]", employees[i].name);
        printf("Id = ");
        scanf("%d", &employees[i].id);
        printf("Salary = ");
        scanf("%d", &employees[i].salary);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%s\t%d\t%d\n", employees[i].name, employees[i].id, employees[i].salary);
    }
}
