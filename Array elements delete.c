#include<stdio.h>
int yasin_s[100],yasin_r[100];
int sort(int yasin_arr[],int yasin_n)
{
    int yasin_i,yasin_j,yasin_temp ;
    for(yasin_i=1;yasin_i<yasin_n;yasin_i++)
    {
        for(yasin_j=yasin_i;yasin_j>=0;yasin_j--)
        {
        if(yasin_arr[yasin_j]<yasin_arr[yasin_j-1])
        {
            yasin_temp=yasin_arr[yasin_j-1];
            yasin_arr[yasin_j-1]=yasin_arr[yasin_j];
            yasin_arr[yasin_j]=yasin_temp;
        }
        }
    }
    for(yasin_i=0;yasin_i<yasin_n;yasin_i++)
    {
        yasin_s[yasin_i]=yasin_arr[yasin_i];
    }
    printf("");
    yasin_arr[yasin_n-2]=yasin_arr[yasin_n-1];
    yasin_arr[yasin_n-1]='\0';
    for(yasin_i=0;yasin_i<yasin_n-1;yasin_i++)
    {
        yasin_r[yasin_i]=yasin_arr[yasin_i];
    }
}
int main()
{
    int yasin_i,yasin_j,yasin_arr[100],yasin_a,yasin_b,yasin_n,yasin_temp,yasin_size,yasin_val;
    printf("Enter the number of elements: ");
    scanf("%d", &yasin_n);
    printf("Data list: ");
    for(yasin_i=0;yasin_i<yasin_n;yasin_i++)
    {
        scanf("%d", &yasin_arr[yasin_i]);
    }
    sort(yasin_arr,yasin_n);
    printf("Sorted array:");
    for(yasin_i=0;yasin_i<yasin_n;yasin_i++)
    {
        printf("%d  ",yasin_s[yasin_i]);
    }
    printf("");


    printf("Duplicate Value: \n");
    for(int yasin_i = 0; yasin_i < yasin_n; yasin_i++) {
        for(int yasin_j = yasin_i + 1; yasin_j < yasin_n; yasin_j++) {
            if(yasin_arr[yasin_i] == yasin_arr[yasin_j])
                printf("%d\n", yasin_arr[yasin_j]);

        }
    }
    printf("Enter the value to delete : ");
    scanf("%d", &yasin_val);

    if(yasin_val < 0 || yasin_val > yasin_size)
    {
        printf("Invalid value! Please enter value between 1 to %d", yasin_size);
    }
    else
    {

        for(yasin_i=yasin_val-1; yasin_i<yasin_size-1; yasin_i++)
        {
            yasin_arr[yasin_i] = yasin_arr[yasin_i + 1];
        }
        yasin_size--;

        printf("\nElements of array after delete are : ");
        for(yasin_i=0; yasin_i<yasin_size; yasin_i++)
        {
            printf("%d\t", yasin_arr[yasin_i]);
        }
    }
    return 0;
}
