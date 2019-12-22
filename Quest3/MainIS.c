#include <stdio.h>
#include <stdlib.h>
#include "isort.h"
#define  ArraySize 50
int main(){
    int arr[ArraySize];
    for(int i=0;i<ArraySize;i++){
        printf("Enter the number in the %d place",i); 
        scanf(" %d",&(*(arr+i)));
    }
    printarr(arr,ArraySize);
    
    printf("\n");
    printf("\n");
    insertion_sort(arr,ArraySize);
    printarr(arr,ArraySize);
    return 0;
}