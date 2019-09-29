#include "array_merge.h"
#include <stdio.h>
#include "array_mergesort.c"
#include "array_mergesort.h"

int* array_merge(int num_arrays, int* sizes, int** values) {

//i will represent each array in "values"
//j will represent each number in each array in "values"
  for (int i = 0; i < num_arrays; i++){
	for(int j = 0; j < sizes[i]; j++){
		printf("The values are %d \n", values[i][j]);
		// Put the value in an unique values array
		// Have a for loop check if next value is already in unique val array
		// If it is not, add it to the uv array otherwise do nothing
		}
	}
	// Call mergesort on unique value of array
	// use sizeof(unique val array) as the first element of final returned output

  return sizes;
}
