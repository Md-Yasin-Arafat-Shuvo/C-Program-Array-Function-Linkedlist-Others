#include <stdio.h>
int main()
{
    int a[100],i,n,b;
    printf("Element of array: ");
    scanf("%d",&n);
    printf("Data List: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("You have to search: ");
    scanf("%d",&b);
    int t=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==b)
        {
            t++;
        }
    }
    printf("%d is found %d times in your list\n",b,t);
    return 0;
}
