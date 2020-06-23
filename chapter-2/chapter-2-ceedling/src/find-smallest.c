#include "find-smallest.h"

int find_smallest(int list[], int list_size)
{
  int smallest = list[0];
  int smallest_index = 0;

  for (int i = 1; i < list_size; i++)
    {
      if (list[i] < smallest)
	{
	  smallest = list[i];
	  smallest_index = i;
	}
    }
  
  return smallest_index;
}
