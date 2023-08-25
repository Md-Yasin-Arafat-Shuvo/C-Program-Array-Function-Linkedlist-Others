#include <stdio.h>

int main()
{
   int array[100], i, N, updateValue,updateIndex;
   printf("How many Numbers you want to insert?\n");
   scanf("%d", &N);

   printf("Enter %d array elements\n", N);
for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
   printf("\nEnter a value for update: ");
    scanf("%d", &updateValue);
    printf("\nEnter an index number for update: ");
    scanf("%d", &updateIndex);
    for (i = 0; i < N; i++)
        {
            if(i==updateIndex)
            {
                 array[i]=updateValue;
                 break;
            }
        }
        printf("\nThe Updated  array  ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", array[i]);
    }

   return 0;
}
