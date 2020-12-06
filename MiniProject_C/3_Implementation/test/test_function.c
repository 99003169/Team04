#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <function.h>
#define PROJECT_NAME "function"

void test_do_add(void);
void test_do_subtract(void);
void test_do_multiply(void);
void test_do_divide(void);
void test_do_squareroot(void);
void test_do_modulus(void);
void test_do_factorial(void);

int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

  CU_add_test(suite, "TEST_ADD", test_do_add);
  CU_add_test(suite, "TEST_SUBTRACT", test_do_subtract);
  CU_add_test(suite, "TEST_MULTIPLY", test_do_multiply);
  CU_add_test(suite, "TEST_DIVIDE", test_do_divide);
  CU_add_test(suite, "TEST_SQUAREROOT", test_do_squareroot);
  CU_add_test(suite, "TEST_MODULUS", test_do_modulus);
  CU_add_test(suite, "TEST_FACTORIAL", test_do_factorial);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

//-------------------------------------------------------ARITHEMETIC OPERATIONS----------------------------------------------

void test_do_add(void) {
  CU_ASSERT_EQUAL(7, do_add(5,2));
  CU_ASSERT_EQUAL(10, do_add(7,3));
  CU_ASSERT_EQUAL(2000, do_add(500,1500));
}

void test_do_subtract(void) {
  CU_ASSERT_EQUAL(3, do_subtract(5,2));
  CU_ASSERT_EQUAL(4, do_subtract(7,3));
  CU_ASSERT_EQUAL(1000, do_subtract(1500,500));
}

void test_do_multiply(void) {
  CU_ASSERT_EQUAL(10, do_multiply(5,2));
  CU_ASSERT_EQUAL(21, do_multiply(7,3));
  CU_ASSERT_EQUAL(5000, do_multiply(500,10));
}

void test_do_divide(void) {
  CU_ASSERT_EQUAL(5, do_divide(10,2));
  CU_ASSERT_EQUAL(7, do_divide(7,1));
  CU_ASSERT_EQUAL(3, do_divide(1500,500));
}

void test_do_modulus(void) {
  CU_ASSERT_EQUAL(1, do_modulus(5,2));
  CU_ASSERT_EQUAL(3, do_modulus(7,4));
  CU_ASSERT_EQUAL(0, do_modulus(1500,500));
}

void test_do_factorial(void) {
  CU_ASSERT_EQUAL(120, do_fact(5));
  CU_ASSERT_EQUAL(1, do_fact(1));
  CU_ASSERT_EQUAL(6, do_fact(3));
}

void test_do_squareroot(void) {
  CU_ASSERT_EQUAL(5, do_squareroot(25));
  CU_ASSERT_EQUAL(7, do_squareroot(49));
  CU_ASSERT_EQUAL(10, do_squareroot(100));
}
