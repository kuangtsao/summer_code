#include <stdio.h>

int main()
{
  float frau,celi;
  printf("F:");
  scanf("%f",&frau);
  celi = ((frau-32)*5) / 9;
  printf("C:%.0f\n",celi);
  return 0;
}
