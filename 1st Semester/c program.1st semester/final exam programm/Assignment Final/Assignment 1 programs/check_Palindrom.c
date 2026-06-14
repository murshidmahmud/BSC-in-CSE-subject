#include <stdio.h>

int isPalindrome(char str1[]) {

    int len = 0;

    while(str1[len] != '\0') {

        if(str1[len] >= 'A' && str1[len] <= 'Z') {
            str1[len] = str1[len] + 32;
        }
        len++;
    }

    printf("%d", len);

    int i = 0, j = len - 1;

    while(i < j) {

        if(str1[i] != str1[j]) {
            return 0;
        }

        i++;
        j--;
    }

    return 1;
}

int main() {

    char str1[20];

    printf("Please enter the str1 : ");
    scanf("%s", &str1);

    if(isPalindrome(str1)) {
        printf("This is Palindrom");
    }
    else{
        printf("Not Palindrom");
    }

    return 0;
}
