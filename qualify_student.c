#include<stdio.h>

int main() {
    int mainsub, subsidary;
    
    printf("Enter the percentage of main subject: ");
    scanf("%d", &mainsub);

    printf("Enter the percentage of subsidary subject: ");
    scanf("%d", &subsidary);


     if (mainsub>=55 && subsidary>=45)
     {
       printf("The student is qualified");
     }
     else if ((mainsub>=45 || mainsub>=55) && subsidary>=55)
     {
        printf("The student is qualified");
     }
     else if (mainsub>=65 && subsidary <=45)
     {
       printf("The student is allowed to reppear in an examination to qualify");
     }
     else {
        printf("The student is failed");
     }
     
     
     
    return 0;
}