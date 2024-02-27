#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int nilpotent(int arr[][3])
{
    int lastArr[3][3];
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                lastArr[i][j]=arr[i][j]*arr[j][k];       
            }
            
        }
    }
    for(int a=0; a<3; a++)
    {
        for(int b=0; b<3; b++)
        {
            if(lastArr[a][b]!=0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    srand(time(NULL));
    //initialize a randomized array and find out if it's nilpotent or not
    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            arr[i][j]= rand()%11-5;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    if (nilpotent(arr)==0)
    {
        printf("matrix is not nilpotent");
    }
    else
        printf("matrix is indeed nilpotent");
    
    return 0;
}// I don't know if I'm extremely unlucky or if there's a bug in my code but it doesn't print any "matrix is indeed nilpotent"
 //help if you see this pls
 