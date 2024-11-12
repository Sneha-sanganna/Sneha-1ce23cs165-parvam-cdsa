#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        if (!isalnum(str[i])) i++;
        else if (!isalnum(str[j])) j--;
        else if (tolower(str[i]) != tolower(str[j])) return 0;
        else { i++; j--; }
    }
    return 1;


void reverseString(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) { char temp = str[i]; str[i] = str[j]; str[j] = temp; i++; j--; }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
        reverseString(str);
        printf("Reversed string: %s\n", str);
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
