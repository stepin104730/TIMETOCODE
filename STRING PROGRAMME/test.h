#include "unity.h"
#include "string.h"

void setUp(){}

void tearDown(){}

void test_stringpgm_returnsmallsubstrings(void)
{
    TEST_ASSERT_EQUAL_CHAR_STRING(sai kumar reddy,stringpgm(sai_kumar_reddy));
    TEST_ASSERT_EQUAL_CHAR_STRING(i am from banglore,stringpgm(i_am_from_banglore));
    TEST_ASSERT_EQUAL_CHAR_STRING(hello programming world,stringpgm(hello_programming_world));
    
}

void test_stringpgm_returnlargesubstrings(void)
{
    TEST_ASSERT_EQUAL_CHAR_STRING(my name is lekkala sai kumar reddy,stringpgm(my_name_is_lekkala_sai_kumar_reddy));
    TEST_ASSERT_EQUAL_CHAR_STRING(rajamouli has fabolous directing skills,stringpgm(rajamouli_has_fabolous_directing_skills));
}
int test_main(void)
{
    UNITY_BEGIN();
    
    RUN_TEST(test_stringpgm_returnssamllsubstrings);
    RUN_TEST(test_stringpgm_returnlargesubstrings);
    return UNITY_END();
}

