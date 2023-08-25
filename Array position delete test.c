#include<stdio.h>
int main()
{
    int array[100], position, a, i, b, n, count=0;
    printf("Test Case: \n");
    scanf("%d", &a);
    printf("Enter number of elements in array:");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(b = 0; b < n; b++)
        scanf("%d", &array[b]);
   for(i=0; i<a; i++){
        count++;
    printf("Case %d: \n", count);
    printf("Enter the location where you want to delete element from:  ");
    scanf("%d", &position);

    if(position >= n+1)
        printf("Deletion not possible\n\n");
    else
        for(b=position-1; b<n-1; b++)
        array[b] = array[b+1];

    printf("Result array is: \n");

    for(b = 0; b < n-1; b++)
        printf("%d  ", array[b]);
   }
    return 0;
}
