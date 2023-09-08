#include<stdio.h>
#include<conio.h>
int fact(int a);
int main() {
    int p,r;
    printf("Enter a number here you wanted to find the factorial of a number ");
    scanf("%d",&p);
    r=fact(p);
    printf("The result is %d", r);
    return 0;
}
int fact (int a) {
    if (a==0)
    return 1;
    else 
    return (a*fact(a-1));

}