//sparce matrix

#include <stdio.h>

void main(){
    int matrix[3][3] = {{1,2,3},{0,0,0},{0,0,0}};

    //displaying a matrix
    printf("Your matrix is :\n");
    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}