#include <stdio.h>

int main() {

    long long i = 1, fact = 1, result = 1;

    do {
     printf("Enter a number to get factorial (not negative numbers): \n");
     scanf("%lld", &fact);
       }
    while (fact < 0);

    for (i = 1; i <= fact; i++)
        result = result * i;

    printf("Your factorial is %lld", result);
    return 0;
}
