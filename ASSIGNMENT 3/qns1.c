#include <stdio.h>
#include <conio.h>

int main() {
    char str[100], c;
    int i, j;
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter a character to remove: ");
    scanf("%c", &c);
    
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            str[j] = str[i];
            j++;
        }
    }
    
    str[j] = '\0';
    
    printf("String after removing '%c': %s", c, str);
    
    return 0;
}