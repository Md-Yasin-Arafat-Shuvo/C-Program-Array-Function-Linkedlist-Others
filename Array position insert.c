#include <stdio.h>

int main()
{
   int array[100], position, c, n, value;
   printf("How many Numbers you want to insert in Array?\n");
   scanf("%d", &n);

   printf("Enter %d elements of Array\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter Index for Insert a New Value\n");
   scanf("%d", &position);

   printf("Enter the value to insert\n");
   scanf("%d", &value);

   for (c = n - 1; c >= position; c--)
      array[c+1] = array[c];

   array[position] = value;

   printf("Resultant array is\n");

   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);

   return 0;
}
