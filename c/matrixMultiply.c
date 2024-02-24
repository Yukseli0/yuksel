#include <stdio.h>
#include <stdlib.h>
int sumMatrix(int matrix1[][3], int matrix2[][3])
{
    int summary[3][3];
    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            summary[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}

int multiply_matrix(int matrix1[][3], int matrix2[][3])
{
    int sonuc[3][3];
    int A=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                A=A+matrix1[j][k]*matrix2[k][j];
            }
            sonuc[i][j]=A;
            printf("%d ", sonuc[i][j]);
        }
        printf("\n");
    }

}

int main()
{
    int matrix1[3][3];
    int matrix2[3][3];

    //getting arrays as input
    printf("matrix1\n");
    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("enter index(%d, %d)\n", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n\n\n");

    printf("matrix2\n");
    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("enter index(%d, %d)\n", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\n");
    printf("select the operation you are willing to apply (1:multiply 2:summary) \n");
    int islem;
    scanf("%d", &islem);
    switch(islem)
    {
    case 1:
        multiply_matrix(matrix1,matrix2);
        break;
    case 2:
        sumMatrix(matrix1, matrix2);
    }
}