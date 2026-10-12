#include <stdio.h>
 int main (void){

     double pi = 0;
     int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, i = 1, term = 0;
     int flip = 0;

do {

  if (flip == 0)  {
    pi = pi + 4.0/i;
    i = i + 2;  
    term = term + 1;
    flip = 1; 
  }
else {
    pi = pi - 4.0/i;
    i = i + 2;  
    term = term + 1;
    flip = 0;    
}

    if ((int)(pi * 100) == 314 && flag1 == 0) {
       printf("It took %d terms to reach 3.14. Approximation: %.5f\n", term, pi);
       flag1 = 1; }

    if ((int)(pi * 1000) == 3141 && flag2 == 0) {
       printf("It took %d terms to reach 3.141. Approximation: %.5f\n", term, pi);
      flag2 = 1; }

    if ((int)(pi * 10000) == 31415 && flag3 == 0) {
     printf("It took %d terms to reach 3.1415. Approximation: %.5f\n", term, pi);
      flag3 = 1; }

    if ((int)(pi * 100000) == 314159 && flag4 == 0) {
     printf("It took %d terms to reach 3.14159. Approximation: %.5f\n", term, pi);
     flag4 = 1; }
   
} while ((flag1 == 0) || (flag2 == 0) || (flag3 == 0) || (flag4 == 0));

     return 0;
 }          
