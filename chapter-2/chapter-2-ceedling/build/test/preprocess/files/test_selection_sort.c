#include "build/temp/_test_selection_sort.c"
#include "src/find-smallest.h"
#include "src/selection_sort.h"
#include "/home/steven/.gem/ruby/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_when_array_size_is_zero_return_null_pointer(void)

{

  int list[] = {5, 3, 6, 2, 10};

  int list_size = 0;

  int* sorted_list = selection_sort(list, list_size);

  do {if ((((sorted_list)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(19))));}} while(0);

}



void test_when_array_size_is_greater_than_zero_return_a_none_NULL_pointer(void)

{

  int list[] = {5, 3, 6, 2, 10};

  int list_size = 5;

  int* sorted_list = selection_sort(list, list_size);

  do {if ((((sorted_list)) != 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(27))));}} while(0);

}



void test_when_sent_an_ordered_list_module_will_return_list(void)

{

  int list[] = {2, 3, 5, 6, 10};

  int expected_list[] = {2, 3, 5, 6, 10};

  int list_size = 5;

  int* sorted_list = selection_sort(list, list_size);



  UnityAssertEqualIntArray(( const void*)((expected_list)), ( const void*)((sorted_list)), (UNITY_UINT32)((list_size)), (

 ((void *)0)

 ), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_when_sent_unsorted_list_the_new_array_will_contain_the_sorted_list(void)

{

  int list[] = {5, 3, 6, 2, 10};

  int expected_list[] = {2, 3, 5, 6, 10};

  int list_size = 5;

  int* sorted_list = selection_sort(list, list_size);



  UnityAssertEqualIntArray(( const void*)((expected_list)), ( const void*)((sorted_list)), (UNITY_UINT32)((list_size)), (

 ((void *)0)

 ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}
