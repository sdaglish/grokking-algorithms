#include "unity.h"

#include "selection_sort.h"
#include "find-smallest.h"

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
  TEST_ASSERT_NULL(sorted_list);
}

void test_when_array_size_is_greater_than_zero_return_a_none_NULL_pointer(void)
{
  int list[] = {5, 3, 6, 2, 10};
  int list_size = 5;
  int* sorted_list = selection_sort(list, list_size);
  TEST_ASSERT_NOT_NULL(sorted_list);
}

void test_when_sent_an_ordered_list_module_will_return_list(void)
{
  int list[] = {2, 3, 5, 6, 10};
  int expected_list[] = {2, 3, 5, 6, 10};
  int list_size = 5;
  int* sorted_list = selection_sort(list, list_size);

  TEST_ASSERT_EQUAL_INT_ARRAY(expected_list, sorted_list, list_size);
}

void test_when_sent_unsorted_list_the_new_array_will_contain_the_sorted_list(void)
{
  int list[] = {5, 3, 6, 2, 10};
  int expected_list[] = {2, 3, 5, 6, 10};
  int list_size = 5;
  int* sorted_list = selection_sort(list, list_size);

  TEST_ASSERT_EQUAL_INT_ARRAY(expected_list, sorted_list, list_size);
}
