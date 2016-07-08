#include <stdio.h>
#include <math.h>

int minArray(int[],int);

int main()
{
  int isArray[] = {58,75,22,48}; // 假設我們會給的是一個固定的整數陣列 
  int size = sizeof(isArray) / sizeof(isArray[0]); //利用sizeof operator抓出整個陣列的大小,和陣列其中一個元素的大小,兩者相除就可以得到陣列的元素個數 
  int min = minArray(isArray,size-1); //將陣列與它的大小放進去,印出,並且要注意的是,c用索引值來找陣列中的元素,故size-1 
		        
  printf("%d\n",min);
  return 0;			      
}

int minArray(int anArray[],int size)
{	
  if(size == 0) return anArray[0];//base case:如果陣列只有一個元素,那自然最小的就是它了，並且他的索引值為0 
	        
  return fmin(anArray[size],minArray(anArray,size-1));//調用math.h的fmin來找兩者最小,利用對anArray[size]的變動來實現遞迴
}  
