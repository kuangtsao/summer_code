#include <stdio.h>

void printstar(int);
void rec(int);

int main()
{
  int n;
  printf("n:");
  scanf("%d",&n);
  rec(n);
  return 0;
}

void printstar(int n)
{
  if (n == 0) return;
  printf("*");
  printstar(n-1);
}

void rec(int n)
{
  if (n == 0) return;
  printstar(n);
  printf("\n");
  rec(n-1);
}
