#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

matrixs *new_matrix(int row, int col)
{
    matrixs *m = (matrixs *)malloc(sizeof(matrixs));
    m->row = row;
    m->col = col;
    m->array = (int **)malloc(sizeof(int *) * row);

    for (int i = 0; i < row; i++)
        m->array[i] = (int *)malloc(sizeof(int) * col);

    return m;
}

int matrix_set_from_array(matrixs *m, int *arr)
{
    int n = 0;

    for (int i = 0; i < m->row; i++)
        for (int j = 0; j < m->col; j++)
            m->array[i][j] = arr[n++];

    return 1;
}

void print_matrix(matrixs *m)
{
    for (int i = 0; i < m->row; i++)
    {
        printf("    ");

        for (int j = 0; j < m->col; j++)
            printf("%d   ", m->array[i][j]);

        printf("\n");
    }
    printf("\n");
}

int add_matrix(matrixs *m1, matrixs *m2)
{
    /*
    adds the matrix m1 and m2 and saves in m2
    for addition matricies must have same order i.e same row and column
*/

    int condition = m1->row == m2->row && m1->col == m2->col;

    if (!condition) // if either rows or column are diffrent
    {
        fprintf(stderr, "Two matricies when added must have smae number of row and column\n");
        return 0;
    }

    for (int i = 0; i < m1->row; ++i)
    {
        for (int j = 0; j < m1->col; ++j)
        {
            m1->array[i][j] += (int)m2->array[i][j];
        }
    }
}

int mul_const_matrix(matrixs *m, int constant)
{

    /*
        Multiplies a matrix by a constant
    */
    for (int i = 0; i < m->row; i++)
        for (int j = 0; j < m->col; j++)
            m->array[i][j] *= constant;

    return 1;
}


int det_matrix(matrixs *m)
{
    if(m->row!=m->col) {
        fprintf(stderr, "Determinant is possible only for square matrix\n");
        return 0;   // can be confused as determinant
    }

    if(m->row==2)
        // a square matrix 
        return m->array[0][0]*m->array[1][1] - m->array[0][1]*m->array[1][0];

    
    // a genereal case for different order matrix
    // based on recursion
    
}



