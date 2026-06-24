// Program to find the longest word in a sentence
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50] = "";
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str); 

    char *word = strtok(str, " ");
    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    return 0;
}