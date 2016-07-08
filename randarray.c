/*宣告一個array[10],利用rand()%100填滿
 * 印出所有的值
 * 取出>50的值,把他們做平均*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;  
   int anArray[10];
   int sum;
   int counter = 0;
   int average;

  for(i = 0; i < 10; i++)
  {
     anArray[i] = (rand()%100);
     printf("array[%d] = %d\n",i,anArray[i]);

     if(anArray[i] > 50)
     {
        sum += anArray[i];
	counter++;
     }	     
  }
  
  average = sum / counter;

  printf("共%d個整數大於50,總和為%d,平均為%d\n",counter,sum,average);


  return 0;
}
