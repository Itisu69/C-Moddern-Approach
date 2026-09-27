#ifndef QUICK_SORT
#define QUICK_SORT

/* Function that performs quicksort on the given array */
void quicksort(int a[], int low, int high);

/* Splits the array into two halves on which the quicksort will be performed */
int split(int a[], int low, int high);

#endif // !QUICK_SORT
