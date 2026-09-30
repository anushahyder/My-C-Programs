// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <stdbool.h>

int ReturnTime(char coffee, bool doublecup)
{
 int time;
     if (coffee == 'W')
        time = 15 + 15 + 20 + 2 + 4 + 20;
    else if (coffee == 'B')
        time = 20 + 20 + 25 + 15 + 25;
    if (doublecup == true)
        time = time * 1.5;

    return time;   
}

void displayInstructions(char coffee, bool doubleCup)
{
    float times[6];

    if (coffee == 'W')
    {
        times[0] = 15;
        times[1] = 15;
        times[2] = 20;
        times[3] = 2;
        times[4] = 4;
        times[5] = 20;
    }
    else
    {
        times[0] = 20;
        times[1] = 20;
        times[2] = 25;
        times[3] = 15;
        times[4] = 0;
        times[5] = 25;
    }

    if (doubleCup == true)
    {
        for (int i = 0; i < 6; i++)
        {
            times[i] = times[i] * 1.5;
        }
    }

    printf("Put Water: %.1f mins\n", (float)times[0]);
    printf("Sugar: %.1f mins\n", (float)times[1]);
    printf("Mix Well: %.1f mins\n", (float)times[2]);
    printf("Add Coffee: %.1f mins\n", (float)times[3]);

    if (coffee == 'W')
        printf("Add Milk: %.1f mins\n", (float)times[4]);

    printf("Mix Well: %.1f mins\n", (float)times[5]);
} 

int main() {
char coffee;
int doubleinput, totaltime;
bool doublecup, manual;

    printf("Enter coffee type (W for White, B for Black): "); 
    scanf(" %c", &coffee);

    // because in C, we don't have a way to pass a user-input value
    // directly to scanf boolean. in C++ we use cin and cout
    printf("Is the cup double? (1 for Yes, 0 for No): "); 
    scanf("%d", &doubleinput); 
    doublecup = doubleinput == 1; 
    totaltime = ReturnTime(coffee, doublecup);  
    
    displayInstructions(coffee, doublecup); 
    printf("Total coffee time: %d mins\n", totaltime); 
    return 0; 
}
