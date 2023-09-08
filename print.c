#include <stdio.h>


void greetUser(char *name);

int main() {
    char *userName; 

    printf("Enter your name: ");
    scanf("%s", userName);

    greetUser(userName);

    return 0;
}


void greetUser(char *name) {
    printf("Hello, %s Welcome to our college.\n", name);
}