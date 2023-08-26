#include <stdio.h>

int main()
{

    int i,n;
    char ch;
    printf("Test Case = ");
    scanf("%d",&n);
    scanf("%c",&ch);
    for(i=0;i<n;i++)
    {
        scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
     printf("'%c' is alphabet.", ch);

    if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117 ||
       ch==65 || ch==69  || ch==73  || ch==79  || ch==85)
    {
        printf("'%c' is Vowel.\n", ch);
    }
    else if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {

        printf("'%c' is Consonant.\n", ch);
    }

    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.\n", ch);
    }
    else
    {
        printf("'%c' is special character.\n", ch);
    }
    }
    return 0;
}
