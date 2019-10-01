#include "array_merge.h"
#include <stdio.h>
#include "array_mergesort.c"
#include "array_mergesort.h"



int sum(int arr[],int n) {
  int sumVal = 0;

  for(int i = 0; i < n; i++){
	sumVal += arr[i];
  }
  
  return sumVal;
}


int* array_merge(int num_arrays, int* sizes, int** values) {

  int totalSize = sum(sizes, num_arrays);  

  int* bigArr = (int*) calloc(totalSize,sizeof(int));
  int n = 0;
  for (int i = 0; i < num_arrays; i++){
	for (int j = 0; j < sizes[i]; j++){
		bigArr[n] = values[i][j];
		n += 1;
		}
	}
 int c = totalSize;	
 mergesort(totalSize, bigArr);
 for (int i = 0; i < totalSize; i++){
	if(bigArr[i] == bigArr[i+1]){
		c--;
		for (int j = i; j < totalSize; j++){
			bigArr[j+1] = bigArr[j+2];
		
		}
		totalSize--;
		i--;
	} else {
		continue;
	}

  }
 
  for (int i = c; i > 0; i--){

	bigArr[i] = bigArr[i-1];
  }
  bigArr[0] = c;
	
  return bigArr;
}
