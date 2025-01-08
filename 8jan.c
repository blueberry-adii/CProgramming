#include <stdio.h>

// String length
// int my_strlen(char str[])
// {
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return i;
// }

// void main()
// {
//     char str[20];
//     int length;
//     printf("Enter a string: ");
//     gets(str);
//     length = my_strlen(str);
//     printf("Length of the string is: %d\n", length);
// }
// ...............................................................................................................
// String copy
// int my_strcpy(char dest[], char src[])
// {
//     int i = 0;
//     while (src[i] != '\0')
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
// }

// void main()
// {
//     char src[20], dest[20];
//     printf("Enter a string: ");
//     gets(src);
//     my_strcpy(dest, src);
//     printf("Original string is: %s\n", src);
//     printf("Copied string is: %s\n", dest);
// }
// ...............................................................................................................
// String concatenation
// int my_strconcat(char dest[], char src[])
// {
//     int i = 0, j = 0;
//     while (dest[i] != '\0')
//     {
//         i++;
//     }
//     while (src[j] != '\0')
//     {
//         dest[i] = src[j];
//         i++;
//         j++;
//     }
//     dest[i] = '\0';
// }

// void main()
// {
//     char src[20], dest[40];
//     printf("Enter a string: ");
//     gets(dest);
//     printf("Enter another string: ");
//     gets(src);
//     my_strconcat(dest, src);
//     printf("Concatenated string is: %s\n", dest);
// }
// ...............................................................................................................
// String comparison
int my_strcmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != str2[i])
    {
        if (str1[i] == '\0')
            break;
        i++;
    }

    return str1[i] - str2[i];
}

void main()
{
    char str1[20], str2[20];
    int difference;
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    difference = my_strcmp(str1, str2);
    if (difference == 0)
    {
        printf("Both strings are equal\n");
    }
    else if (difference > 0)
    {
        printf("First string is greater than second string\n");
    }
    else
    {
        printf("Second string is greater than first string\n");
    }
}