#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, c,i;
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

