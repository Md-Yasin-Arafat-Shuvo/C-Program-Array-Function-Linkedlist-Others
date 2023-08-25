#include<stdio.h>
int main()
{
    int array[100], position, c, n;
    printf("How many Numbers you want to insert in array? \n");
    scanf("%d", &n);
    printf("\n\nEnter %d element of array\n", n);
    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("\nEnter Index to delete the Value ");
    scanf("%d", &position);
    if(position >= n)
        printf("\n\nDeletion not possible\n\n");
    else
        for(c = position; c < n - 1; c++)
        array[c] = array[c+1];
    printf("\nThe Array After Delete: ");
    for(c = 0; c < n - 1 ; c++)
        printf("%d  ", array[c]);
    return 0;
}
