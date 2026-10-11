#include <stdio.h>

int main() {

    int fib = 0, a = 1, b = 1, next = 1, sum = 1;

    printf("%d \n", a);
    printf("%d \n", b);

    do {

        next = a + b;

        if (next > 1000)
        break;

        printf("%d \n", next);
         
        a = b;
        b = next;

        if (next % 3 == 0 || next % 5 == 0 || next % 7 == 0)
        sum = sum + next;

      }
        
    while (next <= 1000);     
    printf("Sum = %d\n", sum);
    
    return 0;
}
