#include <stdio.h>
#include <string.h>
int check_vowel(char);

int main()
{
  char c[50], s[50];
  int y, d = 0;

  printf("Enter a string to delete vowels\n");
  gets(c);

  for (y = 0; c[y] != '\0'; y++) {
    if (check_vowel(c[y]) == 0) {
      s[d] = c[y];
      d++;
   }
  }

  s[d] = '\0';

  strcpy(c, s);
  printf("String after deleting vowels: %s\n", c);

  return 0;
}

int check_vowel(char s)
{
  if (s == 'a' || s == 'A' || s == 'e' || s == 'E' || s == 'i' || s == 'I' || s =='o' || s=='O' || s == 'u' || s == 'U')
    return 1;

  return 0;
}

