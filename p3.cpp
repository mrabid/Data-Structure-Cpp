#include<iostream>
#include<math.h>
#include<stdlib.h>
#include <stdio.h>

using namespace std;

#define ROWS 3
#define COLS 3

void matrixInput(int mat[][COLS])
{
    int i, j;


    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // (*(mat + i) + j) is equal to &mat[i][j]
            cin>>(*(mat + i) + j);
            //cin>>mat[i][j];
        }
    }
}

void matrixPrint(int mat[][COLS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // *(*(mat + i) + j) is equal to mat[i][j]
            cout<< *(*(mat + i) + j)<<" ";
        }
        cout<<" "<<endl;
    }
}

void matrixAdd(int mat1[][COLS], int mat2[][COLS], int res[][COLS])
{
    int i, j;


    // Iterate over each matrix elements
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
            *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}

int main()
{
    int mat1[ROWS][COLS], mat2[ROWS][COLS], res[ROWS][COLS];

    cout<<"Enter elements in first matrix of size: "<<endl;
    matrixInput(mat1);

    cout<<"\nEnter elemetns in second matrix of size: "<<endl;
    matrixInput(mat2);

    matrixAdd(mat1, mat2, res);

    cout<<"\nSum of first and second matrix: "<<endl;
    matrixPrint(res);


    return 0;
}
