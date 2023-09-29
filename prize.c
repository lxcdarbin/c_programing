#include<stdio.h>

int main() {
    int currentyear,joinedyear,total;
    printf("Enter The current year: ");
    scanf("%d",&currentyear);
    printf("Enter the joined year: ");
    scanf("%d",&joinedyear);
    
    total=currentyear-joinedyear;

    if (total>3)
    {
        printf("Congratulation, You win 2500 rupess");
    }
    else{
        printf("Sory you can't win 2500 rupess");
    }
    

    return 0;
}