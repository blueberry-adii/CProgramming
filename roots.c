#include <math.h>
#include <stdio.h>

int main() {

    double a, b, c, d, root1, root2, real, imag;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4*a*c;

    if (d>0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root2);
    } else if (d==0) {
        root1 = -b/(2*a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
    } else {
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);
        printf("Roots are complex and imaginary:\n");
        printf("Root1 = %.2lf + %.2lfi\n", real, imag);
        printf("Root2 = %.2lf - %.2lfi\n", real, imag);
    }

    return 0;
}