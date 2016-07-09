#include <stdio.h>


int main()
{
  int selector;
  float celi,frau;
  printf("1. C to F\n");
  printf("2. F to C\n");
  printf("==>");
  scanf("%d",&selector);

  if (selector == 1)
  { 
    printf("C:");	  
    scanf("%f",&celi);
    frau = 1.8*celi +32;
    printf("F = %.0f\n",frau);
  }
  else
  {
    printf("F:");	  
    scanf("%f",&frau);
    celi = ( (frau - 32) * 5 ) / 9 ;
    printf("C = %.0f\n",celi);	    
  }
  
  return 0;
}
