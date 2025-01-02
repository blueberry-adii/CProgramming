// 2 January 2025
#include <stdio.h>

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

int main(){
    char s1[10] = "BMSIT";
    char s2[10];

    // Copy s2 into s1
    strcpy(s2, s1);
    printf("After copying, s1: %s\n", s1);
    printf("After copying, s2: %s\n", s2);

    return 0;
}