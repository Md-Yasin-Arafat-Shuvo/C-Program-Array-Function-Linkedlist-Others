#include <stdio.h>

int main()

{

int salary=0, bonus=0;

printf("Enter the employee current salary:");

scanf("%d", &salary);

printf("Enter bonus:");

scanf("%d", &bonus);

totalSalary(&salary, bonus);

printf("Final salary: %d", salary);

return 0;

}
void totalSalary(int *var, int b)

{

*var = *var+b;

}
