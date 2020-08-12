#include "unity.h"
#include "prime.h"
#define false 0
#define true 1

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime(void)
{
  TEST_ASSERT_EQUAL(true, prime(5));
  TEST_ASSERT_EQUAL(true, prime(7));
   TEST_ASSERT_EQUAL(false, prime(15));
    TEST_ASSERT_EQUAL(false, prime(27));
     TEST_ASSERT_EQUAL(true, prime(17));
}
void test_zero_one_two(void)
{
  TEST_ASSERT_EQUAL(false, prime(0));
  TEST_ASSERT_EQUAL(false, prime(1));
  TEST_ASSERT_EQUAL(true, prime(2));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(false, prime(-5));
  TEST_ASSERT_EQUAL(false, prime(-10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_prime);
  RUN_TEST(test_zero_one_two);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
