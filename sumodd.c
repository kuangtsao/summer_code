#include <stdio.h>

int main()
{
  
  int input;
  int odd_sum = 0;


  printf("Enter a series of integer(-111 to break):\n");

  while( (scanf("%d",&input)))
  {
     if (input == -111)
     {
       break;	     
     }
     if (input % 2 == 1)
     {
       odd_sum += input;
     }
  }
  
  printf("sum of odd numbers = %d\n",odd_sum);
  return 0;
}
