/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_when_array_size_is_zero_return_null_pointer(void);
extern void test_when_array_size_is_greater_than_zero_return_a_none_NULL_pointer(void);
extern void test_when_sent_an_ordered_list_module_will_return_list(void);
extern void test_when_sent_unsorted_list_the_new_array_will_contain_the_sorted_list(void);


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
  UnityBegin("test_selection_sort.c");
  run_test(test_when_array_size_is_zero_return_null_pointer, "test_when_array_size_is_zero_return_null_pointer", 14);
  run_test(test_when_array_size_is_greater_than_zero_return_a_none_NULL_pointer, "test_when_array_size_is_greater_than_zero_return_a_none_NULL_pointer", 22);
  run_test(test_when_sent_an_ordered_list_module_will_return_list, "test_when_sent_an_ordered_list_module_will_return_list", 30);
  run_test(test_when_sent_unsorted_list_the_new_array_will_contain_the_sorted_list, "test_when_sent_unsorted_list_the_new_array_will_contain_the_sorted_list", 40);

  return UnityEnd();
}
