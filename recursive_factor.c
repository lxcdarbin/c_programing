#include <stdio.h>

void factor(int a, int i) {
    if (i <= a) {
        if (a % i == 0) {
        printf("%d ", i); 
        }
        factor(a, i + 1);  
    }
}

int main() {
    int p, correct = 0; 

    printf("Enter a positive integer number: ");
     
    while (!correct) {
       scanf("%d", &p);

        if (p <= 0) {
        printf("You are wrong ! Please enter a positive integer: ");
             
        } else {
            correct = 1;
            printf("Factors are: ", p);
            factor(p, 1); 
            
        }
    }

    return 0;
}
