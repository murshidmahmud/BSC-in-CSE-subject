#include <stdio.h>

int check_LowerTriangle(int n, int arr[n][n]) {

    int i, j, result;

    for(i = 0; i < n-1; i++) {
        for(j = n-1; j > i; j--) {
            if(arr[i][j] == 0) {
                result = 1;
            }else{
                result = 0;
            }
        }
    }

    return result;

}

int main() {

    int i, j, n;

    printf("Please enter the array size : ");
    scanf("%d", &n);

    int arr[n][n];

    printf("%d", n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Enter value of %d, %d :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    if(check_LowerTriangle(n, arr)) {
        printf("This is a lower triangle matrix.");
    }
    else{
        printf("This is not a lower Triangle Matrix.");
    }



    return 0;
}
