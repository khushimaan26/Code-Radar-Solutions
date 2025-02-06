#include <stdio.h>

int main() {
    char ch;
    
    // Taking character input
    scanf("%c", &ch);
    
    // Converting uppercase to lowercase
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }
    
    // Printing the character
    printf("You entered: %c\n", ch);
    
    return 0;
}