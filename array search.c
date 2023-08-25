#include <stdio.h>

int main()
{
  int array[100], search, i, n, a, count=0;
  printf("Test Case: \n");
  scanf("%d", &a);
  printf("Enter number of elements in array:\n");
  scanf("%d", &n);

  printf("Enter %d integers: \n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  for(int j = 0; j < a; j++){
      count++;
    printf("Case %d:\n",count);
  printf("Enter your data to search: \n");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (array[i] == search)
    {
      printf("%d is found at index %d.\n", search, i);
      break;
    }
  }
  if (i == n)
    printf("%d is not found in the array.\n", search);
  }
  return 0;
}
