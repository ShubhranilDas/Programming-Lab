#include <stdio.h>

int main() {
    float n1, n2, d;

    
    printf("Enter the 1st float no: ");
    
    scanf("%f", &n1);

    
    printf("Enter the 2nd float no: ");
    
    scanf("%f", &n2);

    
    d = n1 - n2;

    
    printf("The difference between %.2f and %.2f is %.2f\n", n1, n2, d);

    return 0; 
}
