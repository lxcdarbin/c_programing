

#include <stdio.h>

void minmax(int a, int b, int c, int *max, int *min);

int main() {
    int a, b, c, min, max;
    printf("Input three numbers: ");
    scanf("%d %d %d", &a, &b, &c); 
    minmax(a, b, c, &max, &min);
    printf("\nmaximum = %d", max);
    printf("\nminimum = %d", min);
    return 0;
}

void minmax(int a, int b, int c, int *max, int *min) {
    *min = a < b && a < c ? a : (b < c ? b : c);
    *max = a > b && a > c ? a : (b > c ? b : c);
}
