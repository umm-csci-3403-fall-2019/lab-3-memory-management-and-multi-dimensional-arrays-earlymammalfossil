#include "mergesort.h"
#include <stdio.h>
#include <stdlib.h>

void sortJoin(int values[], int first, int midpoint, int end){

	int rangeSize = end - first;
	int* destination;
	destination = (int*) calloc(rangeSize, sizeof(int));
	int firstIndex = first;
	int secondIndex = midpoint;
	int copyIndex = 0;
	while (firstIndex < midpoint && secondIndex < end) {
		if (values[firstIndex] < values[secondIndex]) {
			destination[copyIndex] = values[firstIndex];
        		++firstIndex;
		} else {
        		destination[copyIndex] = values[secondIndex];
        		++secondIndex;
      		}

		++copyIndex;
	}
	
	while (firstIndex < midpoint) {
      		destination[copyIndex] = values[firstIndex];
      		++copyIndex;
      		++firstIndex;
    	}
    
	while (secondIndex < end) {
		destination[copyIndex] = values[secondIndex];
		++copyIndex;
		++secondIndex;
	}

	for (int i = 0; i < rangeSize; ++i) {
      		values[i + first] = destination[i];

	}

}



void splitMerge(int values[], int first, int end){
	int range = end - first;
	int full = end + first;

	if (range >= 2){
		int midpoint = full / 2;

		splitMerge(values, first, midpoint);
		splitMerge(values, midpoint, end);
		sortJoin(values, first, midpoint, end);
	}
}
 

void mergesort(int size, int values[]){

	int end;
	int first = 0;

	if(size == 0){
		end = 0;
	} else {
		end = size - 1;
	}

	splitMerge(values, first, end);	

  return;
}





