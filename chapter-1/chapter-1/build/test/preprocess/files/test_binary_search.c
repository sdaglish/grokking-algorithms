#include "build/temp/_test_binary_search.c"
#include "src/binary_search.h"
#include "/home/steven/.gem/ruby/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




int list_1[5] = {1, 3, 5, 7, 9};

int list_1_size = 5;



void setUp(void)

{

}



void tearDown(void)

{

}



void test_return_minus_1_when_item_not_in_list(void)

{

  int item = 2;



  int return_value = binary_search(list_1, list_1_size, item);



  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}



void test_return_none_minus_1_when_item_is_in_the_list(void)

{

  int item = 1;



  int return_value = binary_search(list_1, list_1_size, item);



  UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT) ((0)), (UNITY_INT) ((return_value)), UNITY_GREATER_OR_EQUAL, (

 ((void *)0)

 ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

}



void test_return_index_if_item_is_in_list(void)

{

  int item = 7;



  int return_value = binary_search(list_1, list_1_size, item);



  UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_INT);

}



void test_tests_from_page_9(void)

{

  int item = 3;



  int return_value = binary_search(list_1, list_1_size, item);



  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);



  item = -1;

  return_value = binary_search(list_1, list_1_size, item);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);

}
