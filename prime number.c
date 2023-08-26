#include <stdio.h>
int main() {
    int n, a, i, j, flag = 0;
    printf("Test Case = ");
    scanf("%d", &a);
    for(j = 0; j <= a; j++){
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }
    }
    return 0;
}
