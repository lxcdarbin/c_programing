#include <stdio.h>

int sum();

int main() {
    int s;
    
    s = sum();
    printf("The sum of even number is  %d", s);
    return 0;
}

int sum() {
    
    int r = 0,b;
    printf("Enter a number here ");
    scanf("%d", &b);

    for (int i = 1; i <= 2 * b; i++) {
        if (i % 2 == 0)
            r = r + i;
    }
    return r;
}