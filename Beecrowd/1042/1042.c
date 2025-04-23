#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int smallest = a;
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }

    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    int middle = a + b + c - smallest - largest;

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", smallest, middle, largest, a, b, c);

    return 0;
}

