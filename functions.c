// A function is a sub program that carries out a specific task.

// Advantages:
// 	• Reusability
// 	• Easy to debug
// 	• Modular structure
// 	• Code reduction

// Types of Function:
// 	1. Library (built in) functions: sqrt(), printf(), scanf()
// 	2. User Defined functions: factorial(), sort()

// Elements of a user defined function:
// 	1. Function Declaration
// 	2. Function Definition
// 	3. Function Calling

// Function Declaration (Function prototype)
// It is used to declare a function which consists of 
// 	i) Return type
// 	ii) Name of the function
// 	iii) Parameters with data types
// SYNTAX: return_type function_name(datatype1 var1, datatype2 var2, …);
// Function declaration should always end with semi colon
// var1 and var2 are variables known as function arguments or parameters.
// Examples: 
// 	1. int square(int a);

// Function Definition
// It includes a function declaration (without semicolon) and body of the function
// SYNTAX: return_type function_name(datatype1 var1, datatype2 var2, …)
// {
// 	//Body of the function
// }
// It also includes local variable declarations, function statements and a return statement.

// Function Call
// Invoking a function to execute the instructions.
// SYNTAX: function_name(var1, var2, …);
//......................................................................................
//Write a program to perform addition of 2 numbers using functions
// #include<stdio.h>

// int addition(int a, int b);

// void main(){
//     int sum, x, y;
//     printf("Enter the values of x and y\n");
//     scanf("%d %d", &x, &y);
//     sum = addition(x, y);
//     printf("Sum of 2 numbers is %d", sum);
// }

// int addition(int a, int b){
//     return a+b;
// }
//...........................................................................................
//Write a program to perform swapping of 2 numbers using functions
// #include<stdio.h>

// void swap(int x, int y);

// void main(){
//     int a, b;
//     printf("Enter the values of a and b\n");
//     scanf("%d %d", &a, &b);
//     swap(a,b);

// }

// void swap(int x, int y){
//     int z;
//     z= x;
//     x = y;
//     y = z;
//     printf("The swapped numbers are a: %d and b: %d", x, y);
// }
//....................................................................................
//Write a program to output the largest of 2 numbers using functions
#include<stdio.h>

void largest(int a, int b);

void main(){
    int x, y;
    printf("Enter the values of x and y\n");
    scanf("%d %d", &x, &y);
    largest(x, y);

}

void largest(int a, int b){
    if(a>b){
        printf("the large is %d", a);
    } else {
        printf("the large is %d", b);
    }
}