
#include <stdio.h>
int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A<B && B>C) {
        printf("Highest Value = %d\n", B);
    }
    else if (B<A && A>C) {
        printf("Highest Value = %d\n", A);
    }
    else if (A<C && C>B) {
        printf("Highest Value = %d\n", C);
    }
        if (B>A && A>C || C>A && A>B) {
        printf("Middle Value = %d\n", A);
    }
        else if (A>B && B>C || C>B && B>A) {
        printf("Middle Value = %d\n", B);
    }
        else if (A>C && C>B || B>C && C>A) {
        printf("Middle Value = %d\n", C);
    }
    return 0;
}
