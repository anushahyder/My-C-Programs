#include <stdio.h>
#include <ctype.h>    
#include <string.h>

int main() {

    char username[6];
    char password[7];
  

    while (1) {
        int valid = 1;
        printf("Enter 5-alphabet username: \n");
        scanf ("%5s", username); 

        if (strlen(username) != 5)
            continue;
            
          for (int i = 0; i < strlen(username); i++) {
             if (!isalpha(username[i])) {        
             valid = 0;                      
             break;  
              }
          }

        if (valid == 1)
             break;
        else
             continue;
        
   }

    while (1) {

        printf("Enter password \n");
        scanf("%6s", password);

        if (strlen(password) != 6)
        continue;

        else {

            int digit = 0, upper = 0, lower = 0;
            for (int i = 0; i < 6; i++) {
                if (isdigit(password[i]))
                digit = 1;
                if (isupper(password[i]))
                upper = 1;
                if (islower(password[i]))
                lower = 1;
                }

                if ((digit == 1) && (upper == 1) && (lower == 1)) {
                    break;
                }
                else 
                    continue;
        }          
        }

    printf ("Account created successfully \n");

    char enteredpass[7];
    char entereduser[6];

while (1) {
    
    printf("Enter login details: username \n");
    scanf("%5s", entereduser);
    printf("Enter login details: password \n");
    scanf("%6s", enteredpass);

    
    if (strcmp(entereduser, username) == 0) {
         if (strcmp(enteredpass, password) == 0) {
             printf("Logged in Successfully! Welcome %s \n" ,username);
             break;
         }
         else 
             continue;
    } 
}
    
    return 0;
}
