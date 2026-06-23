// Program  to find the maximum occurring character
#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};
    char maxChar;
    int maxCount = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        count[ch]++;
        
        if (count[ch] > maxCount) {
            maxCount = count[ch];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character is '%c' (appears %d times).\n", maxChar, maxCount);
    return 0;
}