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
        EXPECT_TRUE(c_type_traits_testing_is_integral_ints());
    }

    TEST(is_integral, non_int_types) {
        EXPECT_TRUE(c_type_traits_testing_is_integral_non_ints());
    }

    TEST(is_integral, alias_int_types) {
        EXPECT_TRUE(c_type_traits_testing_is_integral_alias_ints());
    }

    TEST(is_pointer, ptr_types) {
        EXPECT_TRUE(c_type_traits_testing_is_pointer_ptr_types());
    }

    TEST(is_pointer, non_ptr_types) {
        EXPECT_TRUE(c_type_traits_testing_is_pointer_non_ptr_types());
    }
} // namespace c_type_traits_testing
