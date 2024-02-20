#include <iostream>
#include "../headers/matrix.h"

LinearAlgebra::Matrix::Matrix()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }
}

LinearAlgebra::Matrix::Matrix(double e1, double e2, double e3, double e4, double e5, double e6, double e7, double e8, double e9)
{
    matrix[0][0] = e1;
    matrix[0][1] = e2;
    matrix[0][2] = e3;
    matrix[1][0] = e4;
    matrix[1][1] = e5;
    matrix[1][2] = e6;
    matrix[2][0] = e7;
    matrix[2][1] = e8;
    matrix[2][2] = e9;
}

double LinearAlgebra::Matrix::element(int row, int col) const
{
    return matrix[row][col];
}

LinearAlgebra::Matrix::~Matrix() {}
