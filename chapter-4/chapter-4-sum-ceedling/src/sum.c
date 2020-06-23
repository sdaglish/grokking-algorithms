#include "sum.h"

int sum(int list[], int list_size)
{
  if (list_size == 0)
    {
      return 0;
    }

  if (list_size == 1)
    {
      return list[0];
    }

  return (list[0] + sum(&list[1], (list_size-1)));
}
