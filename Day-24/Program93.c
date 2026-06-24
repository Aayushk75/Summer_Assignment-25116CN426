// Program to check string rotation
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation\n");
        return 0;
    }

    char *temp = (char *)malloc(strlen(str1) * 2 + 1);
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        printf("Valid rotation\n");
    } else {
        printf("Not a rotation\n");
    }

    free(temp);
    return 0;
}