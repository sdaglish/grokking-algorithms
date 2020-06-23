#include "unity.h"

#include "find-smallest.h"

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
  TEST_ASSERT_EQUAL(3, smallest);
}
