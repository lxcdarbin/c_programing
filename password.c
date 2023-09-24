#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "darbin"; 
    char enteredPassword[50];
    int correct = 0; 

    while (!correct) {
        printf("Please enter the password: ");
        scanf("%s", enteredPassword);
        printf("\n");

        if (strcmp(enteredPassword, password) == 0) {
            
            
                printf("Wellcome to the Darbin's c programing \n");
            
            
            printf("\n");
            printf("\n");
            correct = 1; 
        } else {
            printf("Incorrect password! please Try again.\n");
            printf("\n");
        }
    }

    return 0;
}
