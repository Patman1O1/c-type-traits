// ISO C++ Includes
#include <type_traits>

// Google Test Includes
#include <gtest/gtest.h>
#include <gmock/gmock.h>

// Local Includes
#include <c_type_traits/type_traits.h>
#include "include/c_type_traits_test.h"

namespace c_type_traits_testing {
    namespace {

    } // namespace

    TEST(is_integral, int_types) {
        EXPECT_TRUE(c_type_traits_tests_is_integral_ints());
    }

    TEST(is_integral, non_int_types) {
        EXPECT_TRUE(c_type_traits_tests_is_integral_non_ints());
    }

    TEST(is_integral, alias_int_types) {
        EXPECT_TRUE(c_type_traits_tests_is_integral_alias_ints());
    }
} // namespace c_type_traits_testing
