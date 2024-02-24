#include <stdio.h>
#include <stdlib.h>


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
    multiply_matrix(matrix1,matrix2);
}