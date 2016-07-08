#include <stdio.h>

void hanoi(int,char,char,char);

int main()
{
  int n;
  printf("請輸入盤數：");
  scanf("%d", &n);
  hanoi(n, 'A', 'B', 'C');
  return 0;
    
}	

void hanoi(int n, char A, char B, char C) 
{
  if(n == 1) 
  
  printf("Move sheet from %c to %c\n", A, C);
  
  else 
  {
   hanoi(n-1, A, C,B);
   hanoi(1, A, B, C);
   hanoi(n-1, B, A, C);
  }
}
