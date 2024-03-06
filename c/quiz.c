#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//quiz question from previous years

int main()
{
    srand(time(NULL));  
    int arr[10];
    int tmp, evenCount=0, OddCount=0;

    for(int i =0; i<10; i++)// init array
    {
        arr[i]=rand()%100;
        if(arr[i]%2==0)
        evenCount++;
        else
        OddCount++;
    }

    //print unsorted array
    printf("unsorted:");
    for(int i =0; i<10; i++)
    {
        
        printf("%d ", arr[i]);
    }
    printf("\n");


    for(int i=0; i<10; i++)//bubble sort
    {
        for(int j=0; j<9-i; j++)
        {
           if(arr[j]>arr[j+1])
           {
            tmp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tmp;
           }
        }
    }
    //print sorted array 
    printf("sorted:");
    for(int i =0; i<10; i++)
    {
       
        printf("%d ", arr[i]);
    }
    printf("\n");

    int arrA[evenCount], arrB[OddCount], a=0, b=0;
    for(int i =0; i<10; i++)
    {
        //check if even or odd
        if(arr[i]%2==0)
        {
            arrA[a]=arr[i];
            a++;
        }
        else
        {
            arrB[b]=arr[i];
            b++;
        }
    }
    printf("even: ");
    //print even array
    for(int i =0; i<evenCount; i++)
    {
       
        printf("%d ", arrA[i]);
    }

    printf("\n");
    printf("odd:");
    //print odd array
    for(int i =0; i<OddCount; i++)
    {
        printf("%d ", arrB[i]);
    }
    printf("\n");
}