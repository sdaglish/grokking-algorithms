#include "selection_sort.h"
#include "find-smallest.h"
#include <stdlib.h>

int* selection_sort(int list[], int list_size)
{
  if (list_size == 0)
    {
      return 0;    // NULL
    }

  int* sorted_list = malloc(sizeof(int)*list_size);
  int smallest = 0;
  for (int i = 0; i < list_size; i++)
    {
      smallest = find_smallest(list, list_size-i);
      sorted_list[i] = list[smallest];
      // "popping" the smallest element from the list
      for (int j = smallest; j < (list_size-i); j++)
	{
	  list[j] = list[j+1];
	}
    }

  return sorted_list;
}
