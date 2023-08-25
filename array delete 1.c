#include <stdio.h>

int main()
{
int array[100], value, c, n;

printf("Enter the number of elements of the array : ");
scanf("%d", &n);

printf("\nInput the array elements : ");

for (c = 0; c < n; c++)
scanf("%d", &array[c]);

printf("\nEnter the position : ");
scanf("%d", &value);

if (value >= n+1)
printf("\nDeletion not possible.\n");
else
{
for(c = position – 1; c < n – 1; c++)
array[c] = array[c+1];

printf("\nArray after deletion : ");

for (c = 0; c < n – 1; c++)
printf("%d\n", array[c]);
}

return 0;
}
