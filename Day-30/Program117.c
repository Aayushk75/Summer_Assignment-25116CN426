// Program to create a student record system using arrays and strings
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[2];
    for(int i = 0; i < 2; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    for(int i = 0; i < 2; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}