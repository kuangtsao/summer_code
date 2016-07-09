#include <stdio.h>
#include <ctype.h>

void Uppercase(char[]);

int main()
{
  char alphabet[100];
  printf("input a character:");
  fgets(alphabet,100,stdin);
  Uppercase(alphabet);
  return 0;
}

void Uppercase(char a[])
{
  int i = 0;
  while(a[i])
  {
   putchar(toupper(a[i]));
   i++;
  }
}
