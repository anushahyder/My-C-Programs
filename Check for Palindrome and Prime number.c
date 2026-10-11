#include <stdio.h>

int main() {

    int num = 0, copy = 0, digit = 0, sum = 0, check = 0, rev = 0, prime = 0, i = 0;

    printf("Enter a 5-digit number \n");
    scanf("%d", &num);

    copy = num;

    for (i = 1; i < 6; i++)
        {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
        }

    check = sum % 2;
    
    if (check == 0) {
    prime = 1;

    for (i = 2; i < copy; i++) {
        if (copy % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime == 1 && copy > 1)
        printf("Your number is a prime number\n");
    else
        printf("Your number is not a prime number\n");
     }
   else {
    num = copy;
    rev = 0;

    for (i = 1; i < 6; i++) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (rev == copy)
        printf("Your number is a palindrome number\n");
    else
        printf("Your number is not a palindrome number\n");
}
    return 0;
}
