#include <stdio.h>

int main()
{
  int num,max;
  int flag = 0;
  
  printf("enter a series of integer (enter -99 to break):\n");
  while((scanf("%d",&num)))
  {
    if (num == -99) break;

    if(flag)
    {
      flag = 1;	    
      max = num; 
    }

    if ( num%2 == 1 &&  num > max)
    {
      max = num;
    }
  
  }
  printf("Max odd number = %d\n",max);
  return 0;  
}
