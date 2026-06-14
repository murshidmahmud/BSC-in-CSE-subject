#include <stdio.h>

void check_Upper_Lowercase(char str[]) {

    int i = 0, upper = 0, lower = 0;

    while(str[i] != '\0') {

        if(str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        }

        i++;
    }

    printf("Total Upper charecter is %d\n", upper);
    printf("Total Lower charecter is %d\n", lower);

}

int main() {

    char str[20];

    printf("Enter the any string : ");
    scanf("%s", &str);

    check_Upper_Lowercase(str);

    return 0;
}
