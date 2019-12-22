#include <stdio.h>
#include <stdlib.h>
#include "isort.h"
void printarr(int* arr,int len){
   for(int i=0;i<len-1;i++){
        printf("%d,",*(arr+i));
    }
    printf("%d\n",*(arr+len-1));
    printf("\n");
}
void shift_element(int *arr, int i) {

for(int j=i;j>0;j--){
    {
        *(arr+j)=*(arr+j-1);
    }
}
}
void insertion_sort(int *arr, int len){
	int *i, *last = arr + len;
	for(i = arr + 1; i < last; i++){
	int val=*i,count=0;
	int *j=i;
	for(j=i;j>arr;j--){
		if(val < *(j-1)) count++;
		else break;
	}
			shift_element(j,count);
			*(j)=val;
			
}
}






