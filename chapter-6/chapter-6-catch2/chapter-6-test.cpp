#include "catch2/catch.hpp"
#include <bits/c++config.h>
#include <cstdio>
#include <limits>

extern "C"{
#include "queue.h"
#include "khash.h"
#include "breath-first-search.h"
}

// I am being very lazy and using the simple queue system from https://www.tutorialspoint.com/data_structures_algorithms/queue_program_in_c.htm

// Changed it to work on string pointers

TEST_CASE("Queue is empty when it is first created", "[queue]")
{
  REQUIRE(size() == 0);
}

TEST_CASE("Queue can change size when insert and and removeData are used", "[queue]")
{
  // Added due to the over-simplistic queue implementation
  while (size() != 0)
    {
      removeData();
    }
  REQUIRE(size() == 0);

  char name1[] = "name1";
  char name2[] = "name2";
  
  SECTION("adding an element increases the size of the queue")
    {
      insert(name1);
      REQUIRE(size() == 1);

      insert(name2);
      REQUIRE(size() == 2);
    }

  SECTION("removing an element will reduce the size of the queue")
    {
      insert(name1);
      insert(name2);
      removeData();
      REQUIRE(size() == 1);
    }

  SECTION("removing all inserted items will cause size to be zero")
    {
      insert(name1);
      insert(name2);
      removeData();
      removeData();
      REQUIRE(size() == 0);
    }
}

TEST_CASE("Queue data can be returned from queue", "[queue]") {
  // Added due to the over-simplistic queue implementation
  while (size() != 0) {
    removeData();
  }
  REQUIRE(size() == 0);

  char name1[] = "name1";
  char name2[] = "name2";

  SECTION("adding and removing single element will return same element")
    {
      insert(name1);
      char* return_value = removeData();
      REQUIRE(strcmp(return_value, name1) == 0);
    }  

  SECTION("adding two elements and then removing them will remove them in order")
    {
      insert(name1);
      insert(name2);
      char* return_value = removeData();
      REQUIRE(strcmp(return_value, "name1") == 0);
      return_value = removeData();
      REQUIRE(strcmp(return_value, "name2") == 0);
    }
}

struct array_struct {
  int size;
  char** strings;
};
KHASH_MAP_INIT_STR(array_of_struct, struct array_struct);
TEST_CASE(
	  "Hashtable with struct pointer have correct size after adding items", "[hash]") {
  khiter_t k;
  int ret;
  khash_t(array_of_struct)* h = kh_init(array_of_struct);

  char* name_array_1[3] = {"alice", "bob", "claire"};
  struct array_struct name_struct;
  name_struct.size = 3;
  name_struct.strings = name_array_1;

  SECTION("size of hash table starts at zero")
    {
      REQUIRE(kh_size(h) == 0);
    }

  SECTION("size of hash increases as items added")
    {
      k = kh_put(array_of_struct, h, "you", &ret);
      kh_val(h, k) = (struct array_struct)name_struct;

      REQUIRE(kh_size(h) == 1);

      k = kh_put(array_of_struct, h, "alice", &ret);
      kh_val(h, k) = (struct array_struct)name_struct;
      REQUIRE(kh_size(h) == 2);
    }
}

TEST_CASE("Hashtable will return the correct struct for a given key",
          "[hash]") {
  khiter_t k;
  int ret;
  khash_t(array_of_struct) *h = kh_init(array_of_struct);

  char *name_array_1[3] = {"alice", "bob", "claire"};
  struct array_struct name_struct;
  name_struct.size = 3;
  name_struct.strings = name_array_1;

  k = kh_put(array_of_struct, h, "you", &ret);
  kh_val(h, k) = (struct array_struct)name_struct;

  k = kh_get(array_of_struct, h, "you");
  struct array_struct return_struct = kh_val(h, k);
  
  REQUIRE(strcmp(return_struct.strings[0], "alice") == 0);
  REQUIRE(return_struct.size == 3);

  char *name_array_2[3] = {"anuj", "peggy"};
  struct array_struct name_struct_2;
  name_struct_2.size = 2;
  name_struct_2.strings = name_array_2;

  k = kh_put(array_of_struct, h, "alice", &ret);
  kh_val(h, k) = (struct array_struct)name_struct_2;

  k = kh_get(array_of_struct, h, "alice");
  return_struct = kh_val(h, k);

  REQUIRE(strcmp(return_struct.strings[0], "anuj") == 0);
  REQUIRE(return_struct.size == 2);
  
  k = kh_get(array_of_struct, h, "you");
  return_struct = kh_val(h, k);

  REQUIRE(strcmp(return_struct.strings[0], "alice") == 0);
  REQUIRE(return_struct.size == 3);

  k = kh_get(array_of_struct, h, "you");
  return_struct = kh_val(h, k);

  struct array_struct return_struct_2;
  k = kh_get(array_of_struct, h, return_struct.strings[0]);
  return_struct_2 = kh_val(h, k);
  REQUIRE(strcmp(return_struct_2.strings[0], "anuj") == 0);
}

TEST_CASE("Breadth first search returns back the name of a mango seller, or a "
          "null pointer if there aren't any in the list", "[search]") {

  SECTION("When no friend is a mango seller, return a null pointer")
    {
      REQUIRE(breadth_first_search_mango_seller_empty() == 0);
    }
  SECTION("testing with the mango seller being the first item in the list")
    {

      REQUIRE(strcmp(breath_first_search_mango_seller_first_order(), "alicem") == 0);  
    }
  SECTION("testing with mange seller being the second item in the list")
    {}
}

// Compile & run:
// - g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -o 010-TestCase 010-TestCase.cpp && 010-TestCase --success
// - cl -EHsc -I%CATCH_SINGLE_INCLUDE% 010-TestCase.cpp && 010-TestCase --success

// Expected compact output (all assertions):
//
// prompt> 010-TestCase --reporter compact --success
// 010-TestCase.cpp:14: failgged: Factorial(0) == 1 for: 0 == 1
// 010-TestCase.cpp:18: passed: Factorial(1) == 1 for: 1 == 1
// 010-TestCase.cpp:19: passed: Factorial(2) == 2 for: 2 == 2
// 010-TestCase.cpp:20: passed: Factorial(3) == 6 for: 6 == 6
// 010-TestCase.cpp:21: passed: Factorial(10) == 3628800 for: 3628800 (0x375f00)
// == 3628800 (0x375f00) Failed 1 test case, failed 1 assertion.;:w
