#include "matrix.h"

void matrix_create(Matrix* a, const float *array, int lines, int columns)
{   
    a->numbers = (float *) malloc(lines*columns);
    for (int i=0 ;i<a->lines; i++)
        for (int j=0; j<a->columns; j++)
            *(a->numbers+j+i*columns) = *(array+j+i*columns);
}

int matrix_init(Matrix* a, int number_of_lines, ...) {
    va_list list;
    va_start(list, number_of_lines);
    for(int count=1; count<=number_of_lines; count++)   {
        // Get next argument in list
        float * line = va_arg(list, float *);
        printf('line ' + count);
        printf(sizeof(line)/sizeof(line[0]));
    }

    // Clean the list
    va_end(list);
}

int matrix_scalar_multiply(float scalar, Matrix* a, Matrix* answer) {
    for (int i=0 ;i < a->lines; i++)
        for (int j=0; j < a->columns; j++)
            //printf("%f   ", *(array+j+i*columns));
            *(a->numbers+j+i*a->columns) = *(a+j+i*a->columns) * scalar;
}

void print_matrix(Matrix* a) {
    for (int i=0 ;i < a->lines; i++)
    {
        for (int j=0; j < a->columns; j++)
        {
            printf("%f   ", *(a->numbers+j+i*a->columns));
        }
    }
}

int matrix_multiply(Matrix* a, Matrix* b, Matrix* answer) {

}

int matrix_sum(Matrix* a, Matrix* b, Matrix* answer) {

}