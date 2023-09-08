#include<stdio.h>
int lcm(int a, int b);
int main() {
    int x,y,z;
    printf("Enter two numbers here  ");
    scanf("%d%d", &x,&y);
    z=lcm(x,y);
    printf("the result is %d",z);
    
    return 0;
}

int lcm(int a, int b){
    int i;
    for(i=1; i<=a*b; i++){
    if(i%a==0 && i%b==0){
    return i;
    }
    
    }
    return a*b;
}