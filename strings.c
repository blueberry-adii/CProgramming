// 2 January 2025
#include <stdio.h>
#include <string.h>

// int main(){
//     char s1[10], s2[10];
//     printf("Enter 1st string: ");
//     scanf("%3s", s1);
//     printf("Enter 2nd string: ");
//     scanf("%s", s2);
//     printf("1st string: %s\n", s1);
//     printf("2nd string: %s\n", s2);
//     return 0;
// }

// int main(){
//     char s1[100];
//     printf("Enter a string: ");
//     scanf("%s", s1);
//     printf("The length of string is %d", strlen(s1));
//     return 0;
// }

// int main(){
//     char s1[10] = "BMSIT";
//     char s2[10];

//     // Copy s2 into s1
//     strcpy(s2, s1);
//     printf("After copying, s1: %s\n", s1);
//     printf("After copying, s2: %s\n", s2);

//     return 0;
// }

// int main(){
//     char s1[10] = "BMSIT";
//     char s2[10] = "BMSCE";
//     strncpy(s1, s2, 5);
//     printf("After copying, s1: %s\n", s1);
//     return 0;
// }

// int main(){
//     char s1[] = "BMSIT";
//     char s2[] = "AIML";
//     strcat(s1, s2);
//     printf("After concatenation, s1: %s\n", s1);
//     return 0;
// }

// int main(){
//     char s1[] = "ABCDEFG";
//     char s2[] = "ABCD";
//     int res = strcmp(s1, s2);
//     printf("Result: %d\n", res);
// }

// int main(){
//     char s1[] = "ABCDEFG";
//     // Reverse s1
//     strrev(s1);
//     printf("Reversed s1: %s\n", s1);
//     return 0;
// }

// Write a program to define user defined function for calculating the length of the string

// User-defined function to calculate the length of a string
int string_length(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char s1[] = "ABCDEFG";
    char s2[] = "BMSIT";

    // Calculate and print the length of s1
    int len1 = string_length(s1);
    printf("Length of s1: %d\n", len1);

    // Calculate and print the length of s2
    int len2 = string_length(s2);
    printf("Length of s2: %d\n", len2);

    return 0;
}