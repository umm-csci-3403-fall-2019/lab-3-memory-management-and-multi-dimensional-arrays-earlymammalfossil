#ifndef MERGESORT_H_GUARD
#define MERGESORT_H_GUARD

#include <stdbool.h>

#define UNIT_TESTING


void splitMerge(int values[], int first, int end);
void sortJoin(int values[], int first, int midpoint, int end);
void mergesort(int size, int values[]);

#endif
