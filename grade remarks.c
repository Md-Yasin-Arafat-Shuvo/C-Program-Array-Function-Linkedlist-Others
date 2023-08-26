#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<40)
    {
        printf(" F,  0.00,  Fail");
    }
    else if(marks>=40 && marks<45)
    {
        printf(" D,  2.00,  Pass");
    }
    else if(marks>=45 && marks<50)
    {
        printf(" C,  2.25, Below Average");
    }
    else if(marks>=50 && marks<55)
    {
        printf(" C+, 2.50,  Average");
    }
    else if(marks>=55 && marks<60)
    {
        printf(" B-, Grade point Equivalent 2.75, Remarks Above Average");
    }
    else if(marks>=60 && marks<65)
    {
        printf("Grade B, Grade point Equivalent 3.00, Remarks Satisfactory");
    }
    else if(marks>=65 && marks<70)
    {
        printf("Grade B+, Grade point Equivalent 3.25, Remarks Good");
    }
    else if(marks>=70 && marks<75)
    {
        printf("Grade A-, Grade point Equivalent 3.50, Remarks Very Good");
    }
    else if(marks>=75 && marks<80)
    {
        printf("Grade A, Grade point Equivalent 3.75, Remarks Excellent");
    }
    else
    {
        printf("Grade A+, Grade point Equivalent 4.00, Remarks Outstanding");
    }
    return 0;
}
