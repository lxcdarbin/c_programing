
#include<stdio.h>

int main() {
    int a[10], sum=0;
    float avg;

    printf("Enter the number here you want to find the average of a number ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
       sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("The sum is %d", &sum);
    printf("The average number is %f", avg);

    
    
    return 0;
}