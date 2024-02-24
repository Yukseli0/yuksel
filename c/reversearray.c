#include <stdio.h>
#include <stdlib.h>

int main()
 {

    //get size of the array
    int size;
    printf("size of the array: ");
    scanf("%d", &size);
    
    // initialize the array
    int arr[size];
    for(int i =0; i<size; i++)
    {
        printf("enter index %d\n", i);
        scanf("%d", &arr[i]);
    }
    //reverse
    int tmp;
    for(int i=0; i<size/2; i++)
    {
        tmp =arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=tmp;
    }
    //print array
    for(int i =0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }  
    return 0;
 }