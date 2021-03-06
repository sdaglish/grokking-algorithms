/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_base_case_1_when_array_is_empty_return_null_pointer(void);
extern void test_base_case_2_when_array_has_single_element_return_pointer_to_element(void);
extern void test_when_given_a_sorted_array_of_two_elements_the_same_array_is_returned(void);
extern void test_when_given_an_unsorted_array_of_two_elements_the_sorted_array_is_returned(void);
extern void test_when_given_array_of_3_sorted_items_function_returns_same_array(void);
extern void test_when_given_array_of_3_unsorted_items_function_returns_sorted_array(void);
extern void test_testing_array_from_book(void);
extern void test_testing_larger_array(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_quicksearch.c");
  run_test(test_base_case_1_when_array_is_empty_return_null_pointer, "test_base_case_1_when_array_is_empty_return_null_pointer", 13);
  run_test(test_base_case_2_when_array_has_single_element_return_pointer_to_element, "test_base_case_2_when_array_has_single_element_return_pointer_to_element", 21);
  run_test(test_when_given_a_sorted_array_of_two_elements_the_same_array_is_returned, "test_when_given_a_sorted_array_of_two_elements_the_same_array_is_returned", 29);
  run_test(test_when_given_an_unsorted_array_of_two_elements_the_sorted_array_is_returned, "test_when_given_an_unsorted_array_of_two_elements_the_sorted_array_is_returned", 37);
  run_test(test_when_given_array_of_3_sorted_items_function_returns_same_array, "test_when_given_array_of_3_sorted_items_function_returns_same_array", 46);
  run_test(test_when_given_array_of_3_unsorted_items_function_returns_sorted_array, "test_when_given_array_of_3_unsorted_items_function_returns_sorted_array", 55);
  run_test(test_testing_array_from_book, "test_testing_array_from_book", 64);
  run_test(test_testing_larger_array, "test_testing_larger_array", 74);

  return UnityEnd();
}
