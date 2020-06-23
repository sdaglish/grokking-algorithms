#include "unity.h"

#include "factorial.h"

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
  TEST_ASSERT_EQUAL(expected_value, return_value);
}

void test_when_given_value_of_1_then_module_returns_1(void)
{
  int x = 1;
  int expected_value = 1;
  int return_value = factorial(x);
  TEST_ASSERT_EQUAL(expected_value, return_value);
}

void test_when_given_value_of_2_then_module_returns_2(void)
{
  int x = 2;
  int expected_value = 2;
  int return_value = factorial(x);
  TEST_ASSERT_EQUAL(expected_value, return_value);
}

void test_when_given_value_of_3_then_module_returns_6(void)
{
  int x = 3;
  int expected_value = 6;
  int return_value = factorial(x);
  TEST_ASSERT_EQUAL(expected_value, return_value);
} 

void test_high_value_factorial_test(void)
{
  int x = 12;
  int expected_value = 479001600;
  int return_value = factorial(x);
  TEST_ASSERT_EQUAL(expected_value, return_value);
}
