#include<stdio.h>
int main() {
    float side;
    printf("Enter the side length of the square: ");
    scanf("%f", &side);
    
    printf("The area of the square is: %.2f\n", side * side);
    return 0;
}
