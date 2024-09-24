#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main(int argc, char const *argv[])
{
    matrixs *m1 = new_matrix(3, 3);
    matrixs *m2 = new_matrix(3, 3);

    int arr1[9] = {2, 4, 6, 9, 1, 3, 5, 7, 9};
    int arr2[9] = {1, 5, 6, 4, 3, 4, 3, 2, 3};

    matrix_set_from_array(m1, arr1);
    matrix_set_from_array(m2, arr2);
    print_matrix(m2);

    mul_const_matrix(m2, -3);

    print_matrix(m1);
    print_matrix(m2);
    // add_matrix(m1, m2);
    // print_matrix(m1);
    // print_matrix(m2);

    return 0;
}
