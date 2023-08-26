#include <stdio.h>
void fahtocel(void);
void celtofah(void);
int main(void) {
    int c,n;
    printf("Enter total test case number: \n");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        printf("1. For Fahrenheit to Celsius \n");
        printf("2. For Celsius to Fahrenheit \n");
        printf("Enter your Choice\n");
        scanf("%d", &c);
        if (c == 1)
            fahtocel();
        else if (c == 2)
            celtofah();
        else
            printf("Invalid Choice\n");
    }
    return 0;
}
void fahtocel() {
    float celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
}
void celtofah() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
}
