//.............................................................
// Write a program to swap two numbers using function
//.............................................................
// #include<stdio.h>

// void swap(int a, int b){
//     int temp =a;
//     a=b;
//     b=temp;
//     printf("The swapped numbers is a=%d and b=%d", a, b);
// }

// void main(){
//     int a, b;
//     printf("....\n");
//     scanf("%d %d", &a, &b);
//     swap(a,b);
// }
//.............................................................
// Write factorial of number using recursion
//.............................................................
// #include <stdio.h>

// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Factorial of %d is %d\n", num, factorial(num));
//     return 0;
// }
//.............................................................
// Write a program to find the Fibonacci series using recursion
//.............................................................
// #include <stdio.h>

// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main() {
//     int n, i;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");
//     return 0;
// }