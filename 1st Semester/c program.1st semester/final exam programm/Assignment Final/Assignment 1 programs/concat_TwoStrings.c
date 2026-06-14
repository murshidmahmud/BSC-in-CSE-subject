#include <stdio.h>

void concat(char s1[], char s2[]) {
    int i = 0;

    // Move to the end of str1
    while (s1[i] != '\0')
        i++;

    // Copy characters from str2 to str1
    int j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

    // Null-terminate the concatenated string
    s1[i] = '\0';
}

int main() {
    char s1[50];
    char s2[50];

    printf("Please enter the string 1 : ");
    scanf("%s", &s1);

    printf("Please enter the string 2 : ");
    scanf("%s", &s2);

    concat(s1, s2);

    printf("%s", s1);
    return 0;
}
