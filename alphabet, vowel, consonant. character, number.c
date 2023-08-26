#include <stdio.h>

int main()
{

    int a,j; char ch;
    printf("Test Case = ");
    scanf("%d %c", &a, &ch);
    for(j = 0; j <= a; j++)
    {
        return 0;
    }
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);



    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
     printf("'%c' is alphabet.", ch);

    if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117 ||
       ch==65 || ch==69  || ch==73  || ch==79  || ch==85)
    {
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {

        printf("'%c' is Consonant.", ch);
    }

    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
