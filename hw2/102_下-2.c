#include <stdio.h>

int main()
{
  float grade;
  float counter = 0;
  float max,average;
  float sum = 0;
  int flag = 0; 
  printf("Enter grades (-1 to exit)i:\n");

  while((scanf("%f",&grade)))
  {
     if ( grade == -1) break;
     if (flag == 0)
     {
       max = grade;
       flag = 1;
     }

     if ( grade > max)
     {
	 max = grade;     
     }

     sum += grade;
     counter++;
  }

  average = sum / counter;
  
  printf("Total numbers:%.0f\n",counter);
  printf("Max = %.0f\n",max);
  printf("Average = %.1f\n",average);
  return 0;
}
