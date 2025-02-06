#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;

    // Take input using scanf
    scanf("%s %d %[^\n]", name, &age, hobby);

    // Print the name, age, and hobby
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}