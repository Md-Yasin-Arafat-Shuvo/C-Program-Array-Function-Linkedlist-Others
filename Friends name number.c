#include <stdio.h>
#include <string.h>
struct student
{
  char name[30];
  int phone_number;
};
void display(int numberOfFnds,struct student stud[100]);
void searchName(int numberOfFnds,char nam[30],struct student stud[100]);
void searchPhone(int numberOfFnds,int pnumber,struct student stud[100]);
int main()
{
    int i,numberOfFnds;
    printf("Enter number of fnds: ");
    scanf("%d",&numberOfFnds);
    struct student stud[numberOfFnds];
  for(i=0; i<numberOfFnds; i++)
    {
      printf("Friend number %d\n",i+1);
      printf("Enter name :\n");
      scanf("%s",stud[i].name);
      printf("Enter phone number :\n");
      scanf("%d", &stud[i].phone_number);
    }
    int action,pnumber;
    char nam[30];
        printf("Enter action number:\n");
      printf("1: Display Friends\n");
      printf("2: Search by Name\n");
      printf("3: Search by Phone Number\n");
      scanf("%d",&action);
      if(action==1)
      {
       display(numberOfFnds,stud);
      }
      else if(action==2)
      {
          printf("Enter search name:\n");
          scanf("%s",&nam);
          searchName(numberOfFnds,nam,stud);
      }
      else if(action==3)
      {
          printf("Enter search phone:\n");
          scanf("%d",&pnumber);
          searchPhone(numberOfFnds,pnumber,stud);
      }
  return 0;
}
void display(int numberOfFnds,struct student stud[100])
{
  for(int i=0; i<numberOfFnds; i++)
    {
      printf("Showing Friends \n");
      printf("Friend Number %d\n",i+1);
      printf("Name : %s\n", stud[i].name);
      printf("Phone no. : %d\n", stud[i].phone_number);
    }
}
void searchName(int numberOfFnds,char nam[30],struct student stud[100])
{
  for(int i=0; i<numberOfFnds; i++)
    {
        if(strcmp(stud[i].name, nam)==0)
        {
            printf("Friend Number %d\n",i+1);
            printf("Name : %s\n", stud[i].name);
            printf("Phone no. : %d\n", stud[i].phone_number);
        }
        else{
            printf("Not Found");
        }
    }
}
void searchPhone(int numberOfFnds,int pnumber,struct student stud[100])
{
  for(int i=0; i<numberOfFnds; i++)
    {
        if(stud[i].phone_number==pnumber)
        {
            printf("Friend Number %d\n",i+1);
            printf("Name : %s\n", stud[i].name);
            printf("Phone no. : %d\n", stud[i].phone_number);
        }
        else{
            printf("Not Found");
        }
    }
}
