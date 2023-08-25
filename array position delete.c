#include<stdio.h>

int main()
{
    int array[100], position, i, n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("\n\nEnter %d elements in the array : ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("\n\nEnter the location where you want to delete element from:  ");
    scanf("%d", &position);

    if(position >= n+1)
        printf("\n\nDeletion not possible\n\n");
    else
        for(i = position-1; i < n-1; i++)
        array[i] = array[i+1];

    printf("\n\nResult array is: ");

    for(i = 0; i < n-1; i++)
        printf("%d  ", array[i]);
    return 0;
}
