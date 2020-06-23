#include "build/temp/_test_sum.c"
#include "src/sum.h"
#include "/home/steven/.gem/ruby/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_when_given_an_empty_list_module_returns_0(void)

{

  int list[] = {1};

  int list_size = 0;

  int return_value = sum(list, list_size);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

}



void test_when_given_a_list_with_single_item_return_correct_value(void)

{

  int list[] = {1};

  int list_size = 1;

  int return_value = sum(list, list_size);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

}



void test_testing_larger_list(void)

{

  int list[] = {1, 2, 3, 4, 5};

  int list_size = 5;

  int return_value = sum(list, list_size);

  UnityAssertEqualNumber((UNITY_INT)((15)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_INT);

}



void test_testing_very_large_list(void)

{

  int list[1000];

  int list_size = 1000;

  int expected_value = 0;

  for (int i = 0; i < list_size; i++)

    {

      list[i] = i;

      expected_value += i;

    }

  int return_value = sum(list, list_size);

  UnityAssertEqualNumber((UNITY_INT)((expected_value)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT);

}
