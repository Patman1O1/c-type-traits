#define _GNU_SOURCE

// ISO Includes
#include <complex.h>
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

typedef struct test_struct test_struct_typedef;

typedef enum test_enum test_enum_typedef;

typedef union test_union test_union_typedef;

typedef float float32_t;

typedef double float64_t;

typedef long double float128_t;

typedef float complex complex32_t;

typedef double complex complex64_t;

typedef long double complex complex128_t;

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

bool c_type_traits_testing_is_complex_complex(void) {
    static_assert(c_type_traits_is_complex(float complex));
    static_assert(c_type_traits_is_complex(double complex));
    static_assert(c_type_traits_is_complex(long double complex));

    return true;
}

bool c_type_traits_testing_is_complex_non_complex(void) {
    static_assert(!c_type_traits_is_complex(float));
    static_assert(!c_type_traits_is_complex(double));
    static_assert(!c_type_traits_is_complex(long double));
    static_assert(!c_type_traits_is_complex(int));
    static_assert(!c_type_traits_is_complex(char));

    return true;
}

bool c_type_traits_testing_is_bool_bool(void) {
    static_assert(c_type_traits_is_bool(bool));

    return true;
}

bool c_type_traits_testing_is_bool_non_bool(void) {
    static_assert(!c_type_traits_is_bool(int));
    static_assert(!c_type_traits_is_bool(float));
    static_assert(!c_type_traits_is_bool(char));

    return true;
}

bool c_type_traits_testing_is_struct_struct(void) {
    static_assert(c_type_traits_is_struct(struct test_struct));

    return true;
}

bool c_type_traits_testing_is_struct_non_struct(void) {
    static_assert(!c_type_traits_is_struct(union test_union));
    static_assert(!c_type_traits_is_struct(enum test_enum));
    static_assert(!c_type_traits_is_struct(int));
    static_assert(!c_type_traits_is_struct(char));
    static_assert(!c_type_traits_is_struct(float));

    return true;
}

bool c_type_traits_testing_is_struct_alias_struct(void) {
    static_assert(c_type_traits_is_struct(test_struct_typedef));

    return true;
}

bool c_type_traits_testing_is_enum_enum(void) {
    static_assert(c_type_traits_is_enum(enum test_enum));

    return true;
}

bool c_type_traits_testing_is_enum_non_enum(void) {
    static_assert(!c_type_traits_is_enum(struct test_struct));
    static_assert(!c_type_traits_is_enum(union test_union));
    static_assert(!c_type_traits_is_enum(int));
    static_assert(!c_type_traits_is_enum(float));
    static_assert(!c_type_traits_is_enum(char));
    static_assert(!c_type_traits_is_enum(void*));

    return true;
}

bool c_type_traits_testing_is_enum_alias_enum(void) {
    static_assert(c_type_traits_is_enum(test_enum_typedef));

    return true;
}

bool c_type_traits_testing_is_union_union(void) {
    static_assert(c_type_traits_is_union(union test_union));

    return true;
}

bool c_type_traits_testing_is_union_non_union(void) {
    static_assert(!c_type_traits_is_union(struct test_struct));
    static_assert(!c_type_traits_is_union(enum test_enum));
    static_assert(!c_type_traits_is_union(int));
    static_assert(!c_type_traits_is_union(char));
    static_assert(!c_type_traits_is_union(float));
    static_assert(!c_type_traits_is_union(void*));

    return true;
}

bool c_type_traits_testing_is_union_alias_union(void) {
    static_assert(c_type_traits_is_union(test_union_typedef));

    return true;
}

bool c_type_traits_testing_is_array_array(void) {
    static_assert(c_type_traits_is_array(int[]));
    static_assert(c_type_traits_is_array(char[]));
    static_assert(c_type_traits_is_array(float[]));

    return true;
}

bool c_type_traits_testing_is_array_non_array(void) {
    static_assert(!c_type_traits_is_array(void*));
    static_assert(!c_type_traits_is_array(int));
    static_assert(!c_type_traits_is_array(float));
    static_assert(!c_type_traits_is_array(char));

    return true;
}

bool c_type_traits_testing_is_const_const(void) {
    return true;
}

bool c_type_traits_testing_is_const_non_const(void) {
    return true;
}

bool c_type_traits_testing_is_volatile_volatile(void) {
    return true;
}

bool c_type_traits_testing_is_volatile_non_volatile(void) {
    return true;
}

