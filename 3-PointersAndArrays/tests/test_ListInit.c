#include <stdio.h>
#include <stdlib.h>

#include "../libs/List.h"
#include "../libs/unity.h"

#define EMPTY 0
#define INITSIZE 5
#define NEWSIZE 10
#define INDEX 7
#define VALUE 117.00

void setUp(void)
{
}

void tearDown(void)
{
}

void test_ListInit(void)
{
    puts("Testing List Init function");
    List *test_list = NULL;
    test_list = InitList(EMPTY);
    TEST_ASSERT_NOT_NULL(test_list);
    TEST_ASSERT_EQUAL(EMPTY, test_list->elements);
}

void test_ListResize(void)
{
    puts("Testing List Resize function");
    List *test_list = NULL;
    test_list = InitList(INITSIZE);
    TEST_ASSERT_NOT_NULL(test_list);
    TEST_ASSERT_EQUAL(INITSIZE, test_list->elements);
    test_list = SetListSize(test_list, NEWSIZE);
    TEST_ASSERT_NOT_NULL(test_list);
    TEST_ASSERT_EQUAL(NEWSIZE, test_list->elements);
}

void test_SetValue(void)
{
    puts("Testing List Set Value function");
    List *test_list = NULL;
    test_list = InitList(INITSIZE);
    TEST_ASSERT_NOT_NULL(test_list);
    TEST_ASSERT_EQUAL(INITSIZE, test_list->elements);
    test_list = SetListSize(test_list, NEWSIZE);
    TEST_ASSERT_NOT_NULL(test_list);
    TEST_ASSERT_EQUAL(NEWSIZE, test_list->elements);
    test_list = SetValue(test_list, INDEX, VALUE);
    TEST_ASSERT_NOT_NULL(test_list);
    TEST_ASSERT_EQUAL_FLOAT(VALUE, *(test_list->list[INDEX]));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_ListInit, __LINE__);
    RUN_TEST(test_ListResize, __LINE__);
    RUN_TEST(test_SetValue, __LINE__);

    return UNITY_END();
}
