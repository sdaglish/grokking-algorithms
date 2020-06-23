#include "unity.h"

#include "hashtable.h"
#include "uthash.h"
#include "khash.h"

struct hash_struct{
  char name[10];
  int id;
  UT_hash_handle hh;
};

struct hash_struct* users = NULL;

void setUp(void)
{
}

void tearDown(void)
{
}

void test_when_new_hash_table_is_created_its_size_is_zero(void)
{
  int num_users = HASH_COUNT(users);
  TEST_ASSERT_EQUAL_INT(0, num_users);
}    

void test_when_one_item_is_added_to_hast_table_its_size_is_1(void)
{
  const char* names = "steven";
  struct hash_struct *s;
  s = (struct hash_struct*)malloc(sizeof *s);
  strcpy(s->name, names);
  s->id = 0;
  HASH_ADD_STR(users, name, s);
 
  int num_users = HASH_COUNT(users);
  TEST_ASSERT_EQUAL_INT(1, num_users);
}

KHASH_MAP_INIT_INT(32, char)

void test_creating_empty_table_size_is_zero(void)
{
  khiter_t k;
  int ret;
  khash_t(32)* h = kh_init(32);
  
  int size = kh_size(h);
  TEST_ASSERT_EQUAL_INT(0, size);
}

void test_creating_one_item_size_is_one(void)
{
  khiter_t k;
  int ret;
  khash_t(32)* h = kh_init(32);
  k = kh_put(32, h, 5, &ret);
  
  int size = kh_size(h);
  TEST_ASSERT_EQUAL_INT(1, size);
}

KHASH_MAP_INIT_STR(str, int)
  
void test_creating_hash_table_for_string_keys(void)
{
  khiter_t k;
  int ret;
  khash_t(str)* h;
  h = kh_init(str);
  
  
  int size = kh_size(h);
  TEST_ASSERT_EQUAL_INT(0, size);
}
  
void test_adding_single_element_in_hash_table_for_string_keys(void)
{
  khiter_t k;
  int ret;
  khash_t(str)* h;
  h = kh_init(str);

  k = kh_put(str, h, "steven", &ret);
  
  int size = kh_size(h);
  TEST_ASSERT_EQUAL_INT(1, size);
}

void test_testing_value_and_get_for_string_keys(void)
{
  khiter_t k;
  int ret;
  khash_t(str)* h;
  h = kh_init(str);

  k = kh_put(str, h, "steven", &ret);
  kh_val(h, k) = 1234;

  k = kh_get(str, h, "steven");
  int ret_value = kh_val(h, k);
   
  TEST_ASSERT_EQUAL_INT(1234, ret_value);
}

KHASH_MAP_INIT_STR(array_of_strings, char**)
void test_testing_hash_table_where_value_is_array_of_strings(void)
{
  khiter_t k;
  int ret;
  khash_t(array_of_strings)* h;
  h = kh_init(array_of_strings);

  char* graph[3] = {"alice", "bob", "claire"};
  k = kh_put(array_of_strings, h, "you", &ret);
  kh_val(h, k) = (char**)graph;

  int size = kh_size(h);
  TEST_ASSERT_EQUAL_INT(1, size);


  k = kh_get(array_of_strings, h, "you");
  char** array_test = kh_val(h, k);

  char expected_string[] = "alice";
  char expected_string_1[] = "bob";
  char expected_string_2[] = "claire";

  TEST_ASSERT_EQUAL_STRING(expected_string, array_test[0]);
  TEST_ASSERT_EQUAL_STRING(expected_string_1, array_test[1]);
  TEST_ASSERT_EQUAL_STRING(expected_string_2, array_test[2]);
}

struct array_struct {
  int size;
  char** strings;
};

KHASH_MAP_INIT_STR(array_of_struct, struct array_struct);
void test_testing_hash_table_where_value_is_array_structs_containing_size_of_array_and_array(void)
{
  khiter_t k;
  int ret;
  khash_t(array_of_struct)* h = kh_init(array_of_struct);

  char* temp_graph[3] = {"alice", "bob", "claire"};
  struct array_struct graph;
  graph.size = 3;
  graph.strings = temp_graph;

  k = kh_put(array_of_struct, h, "you", &ret);
  kh_val(h, k) = (struct array_struct)graph;

  int size = kh_size(h);
  TEST_ASSERT_EQUAL_INT(1, size);
  
  k = kh_get(array_of_struct, h, "you");
  struct array_struct array_test = kh_val(h, k);
  
  int array_size = array_test.size;
  TEST_ASSERT_EQUAL_INT(3, array_size);

  TEST_ASSERT_EQUAL_STRING("alice", array_test.strings[0]);
  TEST_ASSERT_EQUAL_STRING("bob", array_test.strings[1]);
  TEST_ASSERT_EQUAL_STRING("claire", array_test.strings[2]);
}

void test_testing_something(void) {
   khiter_t k;
  int ret;
  khash_t(array_of_struct)* h = kh_init(array_of_struct);

  char* temp_graph[3] = {"alice", "bob", "claire"};
  char* temp_graph_2[] = {"anuj", "peggy"};
  
  struct array_struct graph;
  graph.size = 3;
  graph.strings = temp_graph;
  struct array_struct graph_bob;
  graph_bob.size = 2;
  graph_bob.strings = temp_graph_2;

  k = kh_put(array_of_struct, h, "you", &ret);
  kh_val(h, k) = (struct array_struct)graph;

  int size = kh_size(h);
  TEST_ASSERT_EQUAL_INT(1, size);
  
  k = kh_get(array_of_struct, h, "you");
  struct array_struct array_test = kh_val(h, k);

  k = kh_put(array_of_struct, h, array_test.strings[0], &ret);
  kh_val(h, k) = graph_bob;
  
  k = kh_get(array_of_struct, h, "alice");
  array_test = kh_val(h, k);
  
  int array_size = array_test.size;
  TEST_ASSERT_EQUAL_INT(2, array_size);

  TEST_ASSERT_EQUAL_STRING("anuj", array_test.strings[0]);
  TEST_ASSERT_EQUAL_STRING("peggy", array_test.strings[1]);
}
  
