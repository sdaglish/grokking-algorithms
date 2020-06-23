#include "unity.h"

#include "binary_search.h"

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

  TEST_ASSERT_EQUAL(-1, return_value);
}

void test_return_none_minus_1_when_item_is_in_the_list(void)
{
  int item = 1;

  int return_value = binary_search(list_1, list_1_size, item);

  TEST_ASSERT_GREATER_OR_EQUAL_INT(0, return_value);
}

void test_return_index_if_item_is_in_list(void)
{
  int item = 7;

  int return_value = binary_search(list_1, list_1_size, item);

  TEST_ASSERT_EQUAL(3, return_value);
}

void test_tests_from_page_9(void)
{
  int item = 3;

  int return_value = binary_search(list_1, list_1_size, item);

  TEST_ASSERT_EQUAL(1, return_value);

  item = -1;
  return_value = binary_search(list_1, list_1_size, item);
  TEST_ASSERT_EQUAL(-1, return_value);
}

