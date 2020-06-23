#include "build/temp/_test_factorial.c"
#include "src/factorial.h"
#include "/home/steven/.gem/ruby/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_when_given_value_of_0_then_module_returns_1(void)

{

  int x = 0;

  int expected_value = 1;

  int return_value = factorial(x);

  UnityAssertEqualNumber((UNITY_INT)((expected_value)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

}



void test_when_given_value_of_1_then_module_returns_1(void)

{

  int x = 1;

  int expected_value = 1;

  int return_value = factorial(x);

  UnityAssertEqualNumber((UNITY_INT)((expected_value)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

}



void test_when_given_value_of_2_then_module_returns_2(void)

{

  int x = 2;

  int expected_value = 2;

  int return_value = factorial(x);

  UnityAssertEqualNumber((UNITY_INT)((expected_value)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_INT);

}



void test_when_given_value_of_3_then_module_returns_6(void)

{

  int x = 3;

  int expected_value = 6;

  int return_value = factorial(x);

  UnityAssertEqualNumber((UNITY_INT)((expected_value)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT);

}



void test_high_value_factorial_test(void)

{

  int x = 12;

  int expected_value = 479001600;

  int return_value = factorial(x);

  UnityAssertEqualNumber((UNITY_INT)((expected_value)), (UNITY_INT)((return_value)), (

 ((void *)0)

 ), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);

}
