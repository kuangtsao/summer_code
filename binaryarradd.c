/* 
 * 想法應該也是跟做一維的題目一樣,全部query出來接著相加
 *
 * */
#include <stdio.h>

int addouterarray (int[][],int,int);
int addinnerarray (int[][],int,int);

int main(){
   int m = 3;  //題目有給定是一個固定空間的2darray,在此假設成不固定的3x3二維陣列
   int n = 3;
   int an2darray[m][n] ={1,2,3,4,5,6,7,8,9};
   int sum = addouterarray(an2darray,m-1,n-1);

   printf("%d",sum);

   return 0;
}


int addinnerarray(2darray[][],outer,inner)
{    
    if(inner == 0) return 2darray[outer][0];	
    
    return 2darray[outer][inner] + addinnerarray(2darray,outer,inner-1);
}

int addouterarray(2darray[][],outer,inner)
{
    if (outer == 0 && inner == 0) return 2darray[0][0];

    int inner_sum = addinnerarray(2darray,outer,inner)

    return  inner_sum + addouterarray(2darray,outer-1,inner); 
}
	
