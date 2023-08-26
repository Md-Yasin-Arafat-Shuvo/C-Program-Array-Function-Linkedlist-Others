#include <stdio.h>
void delete_element(int array[],int n,int position)
{
   int c;
   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];
      printf("Resultant array:\n");
      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }
}
int main()
{
   int array[100], position, c, n;
   printf("Enter number of elements in array = ");
   scanf("%d", &n);
   printf("Enter %d elements = ", n);
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
   printf("Enter the location where you wish to delete element = ");
   scanf("%d", &position);
   delete_element(array,n,position);
   return 0;
}
