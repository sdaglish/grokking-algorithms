#include "breath-first-search.h"
#include <string.h>

struct array_struct {
  int size;
  char** strings;
};
KHASH_MAP_INIT_STR(array_of_struct, struct array_struct);

char* breadth_first_search_mango_seller_empty() { return 0; }


char* breath_first_search_mango_seller_first_order()
{
  // Init the hashtable
  khiter_t k;
  int ret;
  khash_t(array_of_struct)* h = kh_init(array_of_struct);

  char* name_array[] = {"alicem", "bob", "claire"};
  struct array_struct name_struct;
  name_struct.size = 3;
  name_struct.strings = name_array;

  k = kh_put(array_of_struct, h, "you", &ret);
  kh_val(h, k) = (struct array_struct)name_struct;

  // Starting the search with "you"
  // Clearing out the queue just inase
  while (size() != 0)
    {
      removeData();
    }

  // Starting the queue
   k = kh_get(array_of_struct, h, "you");
  struct array_struct temp_struct;
  temp_struct = kh_val(h, k);

      for (int i=0; i<temp_struct.size; i++)
    {
      char temp = temp_struct.strings[i][strlen(temp_struct.strings[i])-1];
      if (temp == 'm')
	{
	  return temp_struct.strings[i];
	}
    }
	
      return 0;
}
