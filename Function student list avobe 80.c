#include<stdio.h>
struct stud
{
    char name[50];
    int m;
};
int main()
{
    int n,i,a;
    a=0;
    struct stud arr[100];
    printf("Number of students: ");
    scanf("%d", &n);
    printf("");
    for(i=0;i<n;i++)
    {
        printf("\nEnter name: ");
        scanf("%s", &arr[i].name);
        printf("Enter Mark: ");
        scanf("%d", &arr[i].m);
        printf("");
    }
    printf("* Students Marks *");
    for(i=0;i<n;i++)
    {
        printf("\nName: %s    ",arr[i].name);
        printf("Mark: %d\n",arr[i].m);
    }
    printf("");
    printf("\n***Students list who got above 80***\n");
    for(i=0;i<n;i++)
    {
        if(arr[i].m>80)
        {
            printf("\nName: %s  ===  \nMark: %d\n ", arr[i].name, arr[i].m);
            a++;
        }
    }
    printf("");
    printf("\nNumber of Students with (>=80) = %d ", a);
    return 0;
}
