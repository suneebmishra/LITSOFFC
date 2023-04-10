#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    p1 = &num1; // pointer to num1
    p2 = &num2; // pointer to num2

    sum = *p1 + *p2; // dereference pointers and add values

    printf("Sum of %d and %d is %d\n", *p1, *p2, sum);

    return 0;
}
