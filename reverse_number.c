#include<stdio.h>
 int reverse(int x);
int main() {
    int num,y,z=0;

printf("enter a number here ");
scanf("%d", &num);
reverse(num);
}




    int reverse(int x) {

        int z=0,y;
        while (x!=0)
    {
       y=x%10;
       
       z=10*z+y;
       x=x/10;
    }
    printf("the reverse is %d", z);
    
    
    return 0;
}
    