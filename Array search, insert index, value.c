#include <stdio.h>
#define MAX_SIZE 100
int main()
{
  int array[100], search, i, n, a, count=0, insertValue,insertIndex;
  printf("Test Case: \n");
  scanf("%d", &a);
  printf("Enter number of elements in array:\n");
  scanf("%d", &n);

  printf("Enter %d integers: \n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  for(int i = 0; i < a; i++){
      count++;
    printf("Case %d:\n",count);
  printf("Enter your data to search: \n");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (array[i] == search)
    {
      printf("%d is found at index %d.\n", search, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d is not found in the array.\n", search);
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
    return 0;
}
