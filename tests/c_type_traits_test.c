#define _GNU_SOURCE

// ISO Includes
#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Local Includes
#include <c_type_traits/type_traits.h>
#include "include/c_type_traits_test.h"

struct test_struct { int x; int y; };

enum test_enum { x, y };

union test_union { int x; int y; };

bool c_type_traits_testing_is_integral_ints(void) {
    static_assert(c_type_traits_is_integral(char));
    static_assert(c_type_traits_is_integral(signed char));
    static_assert(c_type_traits_is_integral(unsigned char));
    static_assert(c_type_traits_is_integral(int));
    static_assert(c_type_traits_is_integral(unsigned int));
    static_assert(c_type_traits_is_integral(long int));
    static_assert(c_type_traits_is_integral(unsigned long int));
    static_assert(c_type_traits_is_integral(long long int));
    static_assert(c_type_traits_is_integral(unsigned long long int));
    return true;
}

bool c_type_traits_testing_is_integral_non_ints(void) {
    static_assert(!c_type_traits_is_integral(bool));
    static_assert(!c_type_traits_is_integral(float));
    static_assert(!c_type_traits_is_integral(double));
    static_assert(!c_type_traits_is_integral(long double));
    static_assert(!c_type_traits_is_integral(struct test_struct));
    static_assert(!c_type_traits_is_integral(enum test_enum));
    static_assert(!c_type_traits_is_integral(union test_union));
    return true;
}

bool c_type_traits_testing_is_integral_alias_ints(void) {
    static_assert(c_type_traits_is_integral(int8_t));
    static_assert(c_type_traits_is_integral(uint8_t));
    static_assert(c_type_traits_is_integral(int16_t));
    static_assert(c_type_traits_is_integral(uint16_t));
    static_assert(c_type_traits_is_integral(int32_t));
    static_assert(c_type_traits_is_integral(uint32_t));
    static_assert(c_type_traits_is_integral(int64_t));
    static_assert(c_type_traits_is_integral(uint64_t));
    static_assert(c_type_traits_is_integral(size_t));
    static_assert(c_type_traits_is_integral(ptrdiff_t));
    return true;
}