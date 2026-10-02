#include <stdio.h>
int main(void){

    
float nts, fsc;       
 printf("Enter your NTS marks in numbers: \n");
 scanf("%f", &nts);
 printf("Enter your FSC marks in numbers: \n");
 scanf("%f", &fsc);

 if (nts > 70 && fsc > 70)
    printf("You are elligible for IT in Oxford \n");
 else if (nts > 60 && fsc > 70)
    printf("You are elligible for Electronics in Oxford \n");
 else if (nts > 50 && fsc > 70)
    printf("You are elligible for Telecommunication in Oxford \n"); 
 else if (nts >= 50 && (fsc >= 60 && fsc <= 70))
    printf("You are elligible for IT in MIT \n");
 else if (nts > 50 && (fsc >= 50 && fsc < 60))
    printf("You are elligible for Chemical in MIT \n");
 else if (nts > 50 && (fsc > 40 && fsc < 50))
    printf("You are elligible for Computer in MIT \n"); 
 else 
    printf("No seats \n");   

    
return 0;
}    
    
    
