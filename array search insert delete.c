#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int array[MAX_SIZE];
    int i, N,search,insertValue,insertIndex,deleteIndex;
    printf("Enter size of array: ");
    scanf("%d", &N);
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("Even numbers in the array are - ");
    for (i = 0; i < N; i++)
        {
            if (array[i] % 2 == 0)
            {
                printf("%d \t", array[i]);
            }
        }
    printf("\nEnter a value for search: ");
    scanf("%d", &search);
    for (i = 0; i < N; i++)
        {
            if(array[i]==search)
            {
                 printf("\nValue Found");
                 break;
            }
        }
    printf("\nEnter a value for insert: ");
    scanf("%d", &insertValue);
    printf("\nEnter an index number for insert: ");
    scanf("%d", &insertIndex);
    for (i = 0; i < N; i++)
        {
            if(i==insertIndex)
            {
                 array[i]=insertValue;
                 break;
            }
        }
        printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\nEnter an index number for delete: ");
    scanf("%d", &deleteIndex);
    for (i = 0; i < N; i++)
        {
            if(i==deleteIndex)
            {
                 array[i]=NULL;
                 break;
            }
        }
        printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", array[i]);
    }
    return 0;
}
