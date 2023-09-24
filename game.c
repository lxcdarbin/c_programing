
#include <stdio.h>
#include <conio.h>

int main() {
    int age;
    char name[50], gmail[50];
    char ch;
    int i = 0;
    int correct = 0;
    int secound;

    printf("Enter your age here: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Enter your name here: ");

        while (1) {
            ch = _getch(); 
            if (ch == '\r') {
                name[i] = '\0'; 
                break;
            } else if (i < 49) {
                name[i++] = ch; 
                _putch('*');
            }
        }
        printf("\n"); 
    } else {
        printf("Sorry! Your age must be greater than or equal to 18.\n");
        return 1; 
    }

    printf("%s, please enter your gmail address here: ", name);
    scanf("%s", gmail);

int secoundguess,firstguess;
printf("Enter your guess number: ");
scanf("%i", &firstguess);
printf("\n");
printf("Enter secound player guess number: ");
scanf("%d", &secoundguess);

if (firstguess==secoundguess)
{  
 
   
     printf("Your are winner");
   
   return 1;
   
    
}


else {
        printf("sory your guess number is wrong! please try again");
        
}

return 0;
}

