#include <stdio.h>
#include <ctype.h>

char Uppercase(char[]);

int main()
{
  char string[100];
  printf("Enter a string:");
  fgets(string,100,stdin);
  Uppercase(string);

  return 0;
}

char Uppercase(char anArray[])
{ 
  int i = 0 ;	
  
  while(anArray[i])
  {
    putchar(toupper(anArray[i]));
    i++;
  }

}
