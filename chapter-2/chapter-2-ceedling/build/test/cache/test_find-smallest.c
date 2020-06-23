#include "build/temp/_test_find-smallest.c"
#include "src/find-smallest.h"
#include "/home/steven/.gem/ruby/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_function_returns_index_of_smallest_item_in_list(void)

{

  int list[] = {5, 3, 6, 2, 10};

  int smallest = find_smallest(list, 5);

  UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((smallest)), (

 ((void *)0)

 ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

}
