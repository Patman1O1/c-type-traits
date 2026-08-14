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

typedef float float32_t;

typedef double float64_t;

typedef long double float128_t;

bool c_type_traits_testing_is_int_ints(void) {
    static_assert(c_type_traits_is_int(char));
    static_assert(c_type_traits_is_int(signed char));
    static_assert(c_type_traits_is_int(unsigned char));
    static_assert(c_type_traits_is_int(int));
    static_assert(c_type_traits_is_int(unsigned int));
    static_assert(c_type_traits_is_int(long int));
    static_assert(c_type_traits_is_int(unsigned long int));
    static_assert(c_type_traits_is_int(long long int));
    static_assert(c_type_traits_is_int(unsigned long long int));
    return true;
}

bool c_type_traits_testing_is_int_non_ints(void) {
    static_assert(!c_type_traits_is_int(bool));
    static_assert(!c_type_traits_is_int(float));
    static_assert(!c_type_traits_is_int(double));
    static_assert(!c_type_traits_is_int(long double));
    static_assert(!c_type_traits_is_int(struct test_struct));
    static_assert(!c_type_traits_is_int(enum test_enum));
    static_assert(!c_type_traits_is_int(union test_union));

    return true;
}

bool c_type_traits_testing_is_int_alias_ints(void) {
    static_assert(c_type_traits_is_int(int8_t));
    static_assert(c_type_traits_is_int(uint8_t));
    static_assert(c_type_traits_is_int(int16_t));
    static_assert(c_type_traits_is_int(uint16_t));
    static_assert(c_type_traits_is_int(int32_t));
    static_assert(c_type_traits_is_int(uint32_t));
    static_assert(c_type_traits_is_int(int64_t));
    static_assert(c_type_traits_is_int(uint64_t));
    static_assert(c_type_traits_is_int(size_t));

    static_assert(c_type_traits_is_int(ptrdiff_t));
    return true;
}

bool c_type_traits_testing_is_ptr_ptr_types(void) {
    static_assert(c_type_traits_is_ptr(void*));
    static_assert(c_type_traits_is_ptr(int*));
    static_assert(c_type_traits_is_ptr(char*));
    static_assert(c_type_traits_is_ptr(void**));
    static_assert(c_type_traits_is_ptr(void***));

    return true;
}

bool c_type_traits_testing_is_ptr_non_ptr_types(void) {
    static_assert(!c_type_traits_is_ptr(intptr_t));
    static_assert(!c_type_traits_is_ptr(uintptr_t));
    static_assert(!c_type_traits_is_ptr(int));
    static_assert(!c_type_traits_is_ptr(char));

    return true;
}

bool c_type_traits_testing_is_float_floats(void) {
    static_assert(c_type_traits_is_float(float));
    static_assert(c_type_traits_is_float(double));
    static_assert(c_type_traits_is_float(long double));

    return true;
}

bool c_type_traits_testing_is_float_non_floats(void) {
    static_assert(!c_type_traits_is_float(int));
    static_assert(!c_type_traits_is_float(char));
    static_assert(!c_type_traits_is_float(bool));
    
    return true;
}

bool c_type_traits_testing_is_float_alias_floats(void) {
    static_assert(c_type_traits_is_float(float32_t));
    static_assert(c_type_traits_is_float(float64_t));
    static_assert(c_type_traits_is_float(float128_t));
    
    return true;
}