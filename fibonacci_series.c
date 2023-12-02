#include<stdio.h>
int fibonic(int num);
int main() {
    int number;
    printf("Enter a number here: ");
    scanf("%d", &number);

    fibonic(number);
  

    return 0;
}

int fibonic(int num) {
    int a=0, b=1, c;
    for (int i = 0; i < num; i++)
    {
      printf("%d ", a);
      c=a+b;
      a=b;
      b=c;
    }
    
   
}