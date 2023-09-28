

#include<stdio.h>

int main() {
    int a,b,*p,*q;
    a=10;
    b=20;

    p=&a;
    q=&b;

   int freecontainer=*p;
   *p=*q;
   *q=freecontainer;

   printf("%d\n", a);
   printf("%d\n", b);

    return 0;
    
}  