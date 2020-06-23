#include "build/temp/_test_quicksearch.c"
#include "src/quicksearch.h"
#include "/home/steven/.gem/ruby/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_base_case_1_when_array_is_empty_return_null_pointer(void)

{

  int array[0];

  int array_size = 0;

  int* sorted_array = quicksort(array, array_size);

  do {if ((((sorted_array)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(18))));}} while(0);

}



void test_base_case_2_when_array_has_single_element_return_pointer_to_element(void)

{

  int array[1] = {2};

  int array_size = 1;

  int* sorted_array = quicksort(array, array_size);

  UnityAssertEqualIntArray(( const void*)((array)), ( const void*)((sorted_array)), (UNITY_UINT32)((1)), (

 ((void *)0)

 ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_when_given_a_sorted_array_of_two_elements_the_same_array_is_returned(void)

{

  int array[2] = {1, 2};

  int array_size = 2;

  int* sorted_array = quicksort(array, array_size);

  UnityAssertEqualIntArray(( const void*)((array)), ( const void*)((sorted_array)), (UNITY_UINT32)((2)), (

 ((void *)0)

 ), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_when_given_an_unsorted_array_of_two_elements_the_sorted_array_is_returned(void)

{

  int array[2] = {2, 1};

  int expected_array[2] = {1, 2};

  int array_size = 2;

  int* sorted_array = quicksort(array, array_size);

  UnityAssertEqualIntArray(( const void*)((expected_array)), ( const void*)((sorted_array)), (UNITY_UINT32)((2)), (

 ((void *)0)

 ), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_when_given_array_of_3_sorted_items_function_returns_same_array(void)

{

  int array[3] = {1, 2, 3};

  int expected_array[3] = {1, 2, 3};

  int array_size = 3;

  int* sorted_array = quicksort(array, array_size);

  UnityAssertEqualIntArray(( const void*)((expected_array)), ( const void*)((sorted_array)), (UNITY_UINT32)((3)), (

 ((void *)0)

 ), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_when_given_array_of_3_unsorted_items_function_returns_sorted_array(void)

{

  int array[3] = {3, 2, 1};

  int expected_array[3] = {1, 2, 3};

  int array_size = 3;

  int* sorted_array = quicksort(array, array_size);

  UnityAssertEqualIntArray(( const void*)((expected_array)), ( const void*)((sorted_array)), (UNITY_UINT32)((3)), (

 ((void *)0)

 ), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_testing_array_from_book(void)

{

  int array[4] = {10, 5, 2, 3};

  int expected_array[4] = {2, 3, 5, 10};

  int array_size = 4;

  int* sorted_array = quicksort(array, array_size);

  UnityAssertEqualIntArray(( const void*)((expected_array)), ( const void*)((sorted_array)), (UNITY_UINT32)((4)), (

 ((void *)0)

 ), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}





void test_testing_larger_array(void)

{

  int array[] = {12,23,3,43,51,35,19,45};

  int expected_array[] = {3,12,19,23,35,43,45,51};

  int array_size = 8;

  int* sorted_array = quicksort(array, array_size);

  UnityAssertEqualIntArray(( const void*)((expected_array)), ( const void*)((sorted_array)), (UNITY_UINT32)((array_size)), (

 ((void *)0)

 ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}
