#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0; // Use a long long to handle larger results

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("The sum of the series 1^2 + 2^2 + 3^2 + ... + %d^2 is %lld\n", n, sum);

    return 0;
}
   
