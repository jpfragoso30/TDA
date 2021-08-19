#include <stdio.h>
#include <stdlib.h>
#include "../libs/unity.h"
#include "../libs/ComplexNumber.h"

void setUp(void)
{
    // Initialize global variables here (mallocs)
    // At the beggining of the test, this gets executed
    // Everything over here gets appended in UNITY_BEGIN
    puts("Complex Number Init test START");
}

void tearDown(void)
{
    // Free global variables (free)
    // At the end of the test, this gets executed
    // Everything over here gets appended in UNITY_END
    puts("Complex Number Init test END");
}

void test_ComplexNumberInit(void)
{
    ComplexNumber test_number = NULL;
    test_number = newComplexNumber();
    TEST_ASSERT_NOT_NULL(test_number);
}

// more functions that test...

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_ComplexNumberInit);

    // any testing function should be called with RUN_TEST(func)...

    return UNITY_END();
}