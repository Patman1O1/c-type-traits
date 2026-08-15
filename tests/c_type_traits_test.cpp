// Google Test Includes
#include <gtest/gtest.h>
#include <gmock/gmock.h>

// Local Includes
#include <c_type_traits/type_traits.h>
#include "include/c_type_traits_test.h"

namespace c_type_traits_testing {
    namespace {

    } // namespace

    TEST(is_int, true_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_int_true_cases());
    }

    TEST(is_int, false_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_int_false_cases());
    }

    TEST(is_ptr, true_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_ptr_true_cases());
    }

    TEST(is_ptr, false_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_ptr_false_cases());
    }

    TEST(is_float, true_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_float_true_cases());
    }

    TEST(is_float, false_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_float_false_cases());
    }

    TEST(is_array, true_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_array_true_cases());
    }

    TEST(is_array, false_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_array_false_cases());
    }
} // namespace c_type_traits_testing
