/* This program calculates the area of a circle using functions */

#include <stdio.h>

#define PI 3.14159

float procesar(float radio);     /* Function prototype */

int main() {

   printf("\033[2J\033[H");      /* Clear the screen */


   float radio, area;            /* Variable declarations */

   printf("Radio = ? ");
   scanf("%f", &radio);
   
   area = procesar(radio);

   printf("Area = %f\n", area);
}

   float procesar(float r) {     /* Function definition */
      float a;                   /* Local variable declaration */

      a = PI * r * r;

      return(a);
   }

