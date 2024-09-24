#ifndef MATRIX_H_

#define MATRIX_H_

typedef struct matrixs
{
    /*
        a matrix structure, array is a pointer to list of pointer of list of rows
    */
    int row;
    int col;
    int **array;
} matrixs;

matrixs *new_matrix(int, int);               /*  Creates new matrix of row and col*/
int matrix_set_from_array(matrixs *, int *); /* takes a linear array and converts it into
                                                 matrix @ remember row*col=number of elements in array*/

void print_matrix(matrixs *); /*    Prints the matrix in some formatted way */

int add_matrix(matrixs *, matrixs *); // adds two matricies of same order
int mul_const_matrix(matrixs *, int); // multiplies the matrix with a constant

int det_matrix(matrixs *);  //finds determinant of a matrix

#endif // MATRIX_H_