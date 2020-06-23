#include "binary_search.h"

int binary_search(int list[], int list_size, int item)
{
  int low = 0;
  int high = list_size - 1;
  int mid = 0;
  int guess = 0;

  while (low <= high)
    {
      mid = (low + high) / 2;
      guess = list[mid];
      if (guess == item)
	return mid;
      if (guess > item)
	high = mid - 1;
      else 
	low = mid + 1;
    }

  return -1;
}
