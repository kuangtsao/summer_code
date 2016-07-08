#include <stdio.h>
#include <math.h>

int main()
{
   float cm;
   float feet;
   float inches;
   float mod_inches;

   printf("cm:");
   scanf("%f",&cm);

   inches = cm / 2.54;
   feet = inches / 12 ;

   mod_inches = fmod(inches,12);

   printf("%.0f feet %.0f inches\n",feet,mod_inches);

   return 0;
}
