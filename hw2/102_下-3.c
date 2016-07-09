#include <stdio.h>

int rec(int);

int main()
{
  int num;
  int ans;

  printf("Enter N:");
  scanf("%d",&num);

  ans = rec(num);

  printf("%d\n",ans);

  return 0;
}

int rec (int n)
{ 
  if ( n == 1) return 1;
   return  (2*n-1) + rec(n-1);  	  

}


