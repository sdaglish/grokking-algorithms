#include "unity.h"

#include "sum.h"

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
  TEST_ASSERT_EQUAL(0, return_value);
}

void test_when_given_a_list_with_single_item_return_correct_value(void)
{
  int list[] = {1};
  int list_size = 1;
  int return_value = sum(list, list_size);
  TEST_ASSERT_EQUAL(1, return_value);
}

void test_testing_larger_list(void)
{
  int list[] = {1, 2, 3, 4, 5};
  int list_size = 5;
  int return_value = sum(list, list_size);
  TEST_ASSERT_EQUAL(15, return_value);
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
  TEST_ASSERT_EQUAL(expected_value, return_value);
}


