/*

? |Create a program that dynamically allocates memory for a sparse matrix in compressed form (row,
? |column, value). Perform addition or multiplication of two such matrices.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <stdlib.h>



// returns the i col j row of an nxn mat
int mat_el(int *mat,int n,int i, int j){
    return  *(mat+(i*n)+j);
}


void print_mat(int *mat,int n,int m){
    int i,j;
    // printing such a matrix is tricky
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%4d ",mat_el(mat,n,i,j));
        }
        printf("\n");
    }
    printf("\n");
    /* 
    dry run:
     ___________________________________________________________________
    |   i   |   j   |   n   |   m   |   (i * n) + j   |   (i * 3) + j   |
    |-------|-------|-------|-------|-----------------|-----------------|
    |   0   |   0   |   3   |   3   |       0         |       0         |
    |   0   |   1   |       |       |       1         |       1         |
    |   0   |   2   |       |       |       2         |       2         |
    |   1   |   0   |       |       |       3         |       3         |
    |   1   |   1   |       |       |       4         |       4         |
    |   1   |   2   |       |       |       5         |       5         |
    |   2   |   0   |       |       |       6         |       6         |
    |   2   |   1   |       |       |       7         |       7         |
    |   2   |   2   |       |       |       8         |       8         |
     -------------------------------------------------------------------

     */
}

// initializes a matrix with consecutive integers starting from seed
void init_mat(int *mat,int n,int m, int seed){
    /* for 
    a matrix 
    {seed+0, seed+1, seed+2},
    {seed+3, seed+4, seed+5},
    {seed+6, seed+7, seed+8}
     */
    int i;
    for (i = 0; i < m*n; i++)
    {
        *(mat+i) = i+seed;
    }
}

void add_mat(int *mat3,int *mat1,int *mat2,int m,int n){
    int i,j;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            *(mat3+(i*n)+j) = mat_el(mat1,n,i,j) + mat_el(mat2,n,i,j);
        }
    }
}

void reset_mat(int *mat,int n,int m){
    int i,j;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
           *(mat + (i * n) + j) = 0;
        }
    }
}

void mult_mat(int *mat3,int *mat1,int *mat2,int n){
    // can only work for square matrices

    // sanitize out matrix to prevent incorrect results
    reset_mat(mat3,n,n);

    int i,j,k;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            for (k = 0; k < n; k++)
            {
                *(mat3 + (i*n) + j) += mat_el(mat1,n,i,k) * mat_el(mat2,n,k,j);
            }
            
        }
    }
    
}

int main(){
    int n=4,m=4,i,j;
    int *mat   = malloc(n*m*sizeof(int));
    int *mat_2 = malloc(n*m*sizeof(int));
    int *mat_3 = malloc(n*m*sizeof(int));

    
    
    init_mat(mat,n,m,1);
    init_mat(mat_2,n,m,4);

    print_mat(mat,n,m);
    
    print_mat(mat_2,n,m);

    add_mat(mat_3,mat_2,mat,n,m);
    print_mat(mat_3,n,m);
    
    

    mult_mat(mat_3,mat,mat_2,n);
    print_mat(mat_3,n,m);
    mult_mat(mat_3,mat_2,mat,n);
    print_mat(mat_3,n,m);
    


 return 0;
}