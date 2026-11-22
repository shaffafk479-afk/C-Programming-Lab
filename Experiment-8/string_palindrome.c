#include <stdio.h>

int main(void)
{
    char text[200];
    int length = 0, left, palindrome = 1;
    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;
    while (text[length] != '\0' && text[length] != '\n')
        length++;
    left = 0;
    while (left < length / 2) {
        if (text[left] != text[length - 1 - left]) {
            palindrome = 0;
            break;
        }
        left++;
    }
    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}
