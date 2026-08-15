// Google Test Includes
#include <gtest/gtest.h>
#include <gmock/gmock.h>

// Local Includes
#include <c_type_traits/type_traits.h>
#include "include/c_type_traits_test.h"

namespace c_type_traits_testing {
    namespace {

    } // namespace

    TEST(is_int, int_types) {
        EXPECT_TRUE(c_type_traits_testing_is_int_ints());
    }

    TEST(is_int, non_int_types) {
        EXPECT_TRUE(c_type_traits_testing_is_int_non_ints());
    }

    TEST(is_int, alias_int_types) {
        EXPECT_TRUE(c_type_traits_testing_is_int_alias_ints());
    }

    TEST(is_ptr, ptr_types) {
        EXPECT_TRUE(c_type_traits_testing_is_ptr_ptr_types());
    }

    TEST(is_ptr, non_ptr_types) {
        EXPECT_TRUE(c_type_traits_testing_is_ptr_non_ptr_types());
    }

    TEST(is_float, float_types) {
        EXPECT_TRUE(c_type_traits_testing_is_float_floats());
    }

    TEST(is_float, non_float_types) {
        EXPECT_TRUE(c_type_traits_testing_is_float_non_floats());
    }

    TEST(is_float, alias_float_types) {
        EXPECT_TRUE(c_type_traits_testing_is_float_alias_floats());
    }

    TEST(is_array, true_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_array_array());
    }

    TEST(is_array, false_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_array_non_array());
    }

    TEST(is_const, true_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_const_const());
    }

    TEST(is_const, false_cases) {
        EXPECT_TRUE(c_type_traits_testing_is_const_non_const());
    }
} // namespace c_type_traits_testing
