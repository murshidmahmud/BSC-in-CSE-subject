#include <stdio.h>


int find_Matrix(int n, int ara[n][n]) {


    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(ara[i][j] != 0) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {

    int n;

    printf("Please enter the matrix size : ");
    scanf("%d", &n);

    int ara[n][n], i, j;

    printf("Please enter the matrix array number : \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
                printf("Enter matrix element %d, %d \n", i+1, j+1);
            scanf("%d", &ara[i][j]);
        }
    }

    if(find_Matrix(n, ara)) {
        printf("This matrix is upper triangle matrix.\n");
    }
    else {
        printf("This matrix is not an upper triable matrix.");
    }

    return 0;
}
