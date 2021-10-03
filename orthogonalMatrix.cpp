#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main(){
    int i,j,k;
    int mat[MAX][MAX];
    printf("enter row and columns: ");
    int r,c;
    scanf("%d%d", &r,&c);

    printf("enter matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("entered matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    int trans[MAX][MAX];
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            trans[i][j] = mat[j][i];
        }
    }
    
    printf("\n\ntranspose matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

    int pro[MAX][MAX];
    int sum=0;
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            for(int k=0;k<c;k++){
                sum += mat[i][k] * trans[k][j];
            }
            pro[i][j] = sum;
            sum=0;
        }
    }
    
    printf("\n\nresultant matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",pro[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++){
        for (j = 0; j < r; j++){
            if (i == j){
                if (pro[i][j] != 1)
                    break;
                }
                else{
                    if (pro[i][j] != 0)
                    break;
                }
            }
        if (j != r)
            break;
        }
        
    if (i != r)
        printf("The matrix isn't orthogonal.\n");
    else
        printf("The matrix is orthogonal.\n");
    

    return 0;
}