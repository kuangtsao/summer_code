#include <stdio.h>

int main()
{
  int sum,num;
  printf("Enter a series of integer(enter -99 to break):");
  while((scanf("%d",&num)))
  {
    if (num == -99) break;
    if (num % 2  == 0) sum += num;   
  }
  printf("sum of even numbers:%d\n",sum);
  return 0;
}
