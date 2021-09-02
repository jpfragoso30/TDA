#include <stdio.h>
#include <stdlib.h>

#include "../libs/List.h"
#include "../libs/unity.h"

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
    test_list = InitList(0);
    TEST_ASSERT_NOT_NULL(test_list);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_ListInit, __LINE__);

    return UNITY_END();
}
