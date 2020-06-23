#include "quicksearch.h"

void swap(int* a, int* b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int* quicksort(int array[], int array_size)
{
  if (array_size == 0)
    return 0;
  if (array_size == 1)
    return array;

  int pivot_index = array_size - 1;
  int pivot = array[pivot_index];

  // partition 
  int i = -1;
  for (int j = 0; j < array_size-1; j++)
    {
      if (array[j] < pivot)
	{
	  i++;
	  swap(&array[i], &array[j]);
	}
    } 
  swap(&array[i+1], &array[array_size - 1]);

  pivot_index = i+1;

  // sorting both sides of array
  quicksort(&array[0], pivot_index);
  quicksort(&array[pivot_index+1], array_size - pivot_index - 1);
      
  return array;
}
