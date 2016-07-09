#include <stdio.h>

int main()
{
  int n1,n2,ans;
  printf("Teacher:\n");
  printf("n1:");
  scanf("%d",&n1);
  printf("n2:");
  scanf("%d",&n2);
  printf("student:\n");
  printf("%d+%d=?",n1,n2);
  scanf("%d",&ans);

  if (ans == n1+n2) printf("Correct\n");
  else 
  {
    printf("Wrong\n");
    printf("%d+%d=%d\n",n1,n2,n1+n2);
  }	  
  
  return 0;
}
