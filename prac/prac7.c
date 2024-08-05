//Implement the string operations of strcat, strcmp, strcpy functions using pointer.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char* ptr1 = str1;
    char* ptr2 = str2;

    // Using strcpy with pointers
    printf("Before strcpy: %s %s\n", ptr1, ptr2);
    strcpy(ptr2, ptr1);
    printf("After strcpy: %s %s\n", ptr1, ptr2);

    // Using strcmp with pointers
    int result = strcmp(ptr1, ptr2);
    if (result == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }

    return 0;
}