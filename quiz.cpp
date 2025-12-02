

#include <stdio.h>

int main() {
    int n, a, b, c, d, e, sum, square;

    printf("Enter 5 digit number: ");
    scanf("%d", &n);

    a = n % 10;
    n = n / 10;-

    b = n % 10;
    n = n / 10;

    c = n % 10;
    n = n / 10;

    d = n % 10;
    n = n / 10;

    e = n % 10;

    sum = a + b + c + d + e;
    square = sum * sum;
    

    printf("Square of sum = %d", square);

    return 0;
}

