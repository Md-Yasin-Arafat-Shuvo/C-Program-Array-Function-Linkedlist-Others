#include <stdio.h>
struct student
{
  char name[30];
  int phone_number;
};

int main()
{
  struct student stud[4];
  int i;
  for(i=0; i<3; i++)
    {
      printf("Student %d\n",i+1);
      printf("Enter name :\n");
      scanf("%s",stud[i].name);
      printf("Enter phone number :\n");
      scanf("%d", &stud[i].phone_number);
    }
  for(i=0; i<3; i++)
    {
      printf("Student %d\n",i+1);
      printf("Name : %s\n", stud[i].name);
      printf("Phone no. : %d\n", stud[i].phone_number);
    }
  return 0;
}
