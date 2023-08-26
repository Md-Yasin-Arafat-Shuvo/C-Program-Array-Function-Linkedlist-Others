#include<stdio.h>

void giveMeArray(int a);

int main()
{
    int myArray[100], size, c;
    printf("Enter %ld integers\n", size);

  for ( c = 0 ; c < size ; c++ )
    scanf("%ld", &myArray[c]);
    giveMeArray(myArray[2]);        //Passing array element myArray[2] only.
    return 0;
}

void giveMeArray(int a)
{
    printf("%d", a);
}
