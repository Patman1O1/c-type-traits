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

bool c_type_traits_testing_is_int_true_cases(void) {
    static_assert(c_type_traits_is_int(char));
    static_assert(c_type_traits_is_int(const char));
    static_assert(c_type_traits_is_int(volatile char));
    static_assert(c_type_traits_is_int(const volatile char));
    static_assert(c_type_traits_is_int(_Atomic char));

    static_assert(c_type_traits_is_int(signed char));
    static_assert(c_type_traits_is_int(const signed char));
    static_assert(c_type_traits_is_int(volatile signed char));
    static_assert(c_type_traits_is_int(const volatile signed char));
    static_assert(c_type_traits_is_int(_Atomic signed char));

    static_assert(c_type_traits_is_int(unsigned char));
    static_assert(c_type_traits_is_int(const unsigned char));
    static_assert(c_type_traits_is_int(volatile unsigned char));
    static_assert(c_type_traits_is_int(const volatile unsigned char));
    static_assert(c_type_traits_is_int(_Atomic unsigned char));

    static_assert(c_type_traits_is_int(int));
    static_assert(c_type_traits_is_int(const int));
    static_assert(c_type_traits_is_int(volatile int));
    static_assert(c_type_traits_is_int(const volatile int));
    static_assert(c_type_traits_is_int(_Atomic int));

    static_assert(c_type_traits_is_int(unsigned int));
    static_assert(c_type_traits_is_int(const unsigned int));
    static_assert(c_type_traits_is_int(volatile unsigned int));
    static_assert(c_type_traits_is_int(const volatile unsigned int));
    static_assert(c_type_traits_is_int(_Atomic unsigned int));

    static_assert(c_type_traits_is_int(long int));
    static_assert(c_type_traits_is_int(const long int));
    static_assert(c_type_traits_is_int(volatile long int));
    static_assert(c_type_traits_is_int(const volatile long int));
    static_assert(c_type_traits_is_int(_Atomic long int));

    static_assert(c_type_traits_is_int(unsigned long int));
    static_assert(c_type_traits_is_int(const unsigned long int));
    static_assert(c_type_traits_is_int(volatile unsigned long int));
    static_assert(c_type_traits_is_int(const volatile unsigned long int));
    static_assert(c_type_traits_is_int(_Atomic unsigned long int));

    static_assert(c_type_traits_is_int(long long int));
    static_assert(c_type_traits_is_int(const long long int));
    static_assert(c_type_traits_is_int(volatile long long int));
    static_assert(c_type_traits_is_int(const volatile long long int));
    static_assert(c_type_traits_is_int(_Atomic long long int));

    static_assert(c_type_traits_is_int(unsigned long long int));
    static_assert(c_type_traits_is_int(const unsigned long long int));
    static_assert(c_type_traits_is_int(volatile unsigned long long int));
    static_assert(c_type_traits_is_int(const volatile unsigned long long int));
    static_assert(c_type_traits_is_int(_Atomic unsigned long long int));

    static_assert(c_type_traits_is_int(int8_t));
    static_assert(c_type_traits_is_int(const int8_t));
    static_assert(c_type_traits_is_int(volatile int8_t));
    static_assert(c_type_traits_is_int(const volatile int8_t));
    static_assert(c_type_traits_is_int(_Atomic int8_t));

    static_assert(c_type_traits_is_int(uint8_t));
    static_assert(c_type_traits_is_int(const uint8_t));
    static_assert(c_type_traits_is_int(volatile uint8_t));
    static_assert(c_type_traits_is_int(const volatile uint8_t));
    static_assert(c_type_traits_is_int(_Atomic uint8_t));

    static_assert(c_type_traits_is_int(int16_t));
    static_assert(c_type_traits_is_int(const int16_t));
    static_assert(c_type_traits_is_int(volatile int16_t));
    static_assert(c_type_traits_is_int(const volatile int16_t));
    static_assert(c_type_traits_is_int(_Atomic int16_t));

    static_assert(c_type_traits_is_int(uint16_t));
    static_assert(c_type_traits_is_int(const uint16_t));
    static_assert(c_type_traits_is_int(volatile uint16_t));
    static_assert(c_type_traits_is_int(const volatile uint16_t));
    static_assert(c_type_traits_is_int(_Atomic uint16_t));

    static_assert(c_type_traits_is_int(int32_t));
    static_assert(c_type_traits_is_int(const int32_t));
    static_assert(c_type_traits_is_int(volatile int32_t));
    static_assert(c_type_traits_is_int(const volatile int32_t));
    static_assert(c_type_traits_is_int(_Atomic int32_t));

    static_assert(c_type_traits_is_int(uint32_t));
    static_assert(c_type_traits_is_int(const uint32_t));
    static_assert(c_type_traits_is_int(volatile uint32_t));
    static_assert(c_type_traits_is_int(const volatile uint32_t));
    static_assert(c_type_traits_is_int(_Atomic uint32_t));

    static_assert(c_type_traits_is_int(int64_t));
    static_assert(c_type_traits_is_int(const int64_t));
    static_assert(c_type_traits_is_int(volatile int64_t));
    static_assert(c_type_traits_is_int(const volatile int64_t));
    static_assert(c_type_traits_is_int(_Atomic int64_t));

    static_assert(c_type_traits_is_int(uint64_t));
    static_assert(c_type_traits_is_int(const uint64_t));
    static_assert(c_type_traits_is_int(volatile uint64_t));
    static_assert(c_type_traits_is_int(const volatile uint64_t));
    static_assert(c_type_traits_is_int(_Atomic uint64_t));

    static_assert(c_type_traits_is_int(size_t));
    static_assert(c_type_traits_is_int(const size_t));
    static_assert(c_type_traits_is_int(volatile size_t));
    static_assert(c_type_traits_is_int(const volatile size_t));
    static_assert(c_type_traits_is_int(_Atomic size_t));

    static_assert(c_type_traits_is_int(ptrdiff_t));
    static_assert(c_type_traits_is_int(const ptrdiff_t));
    static_assert(c_type_traits_is_int(volatile ptrdiff_t));
    static_assert(c_type_traits_is_int(const volatile ptrdiff_t));
    static_assert(c_type_traits_is_int(_Atomic ptrdiff_t));

    return true;
}

bool c_type_traits_testing_is_int_false_cases(void) {
    static_assert(!c_type_traits_is_int(bool));
    static_assert(!c_type_traits_is_int(const bool));
    static_assert(!c_type_traits_is_int(volatile bool));
    static_assert(!c_type_traits_is_int(const volatile bool));
    static_assert(!c_type_traits_is_int(_Atomic bool));

    static_assert(!c_type_traits_is_int(float));
    static_assert(!c_type_traits_is_int(const float));
    static_assert(!c_type_traits_is_int(volatile float));
    static_assert(!c_type_traits_is_int(const volatile float));
    static_assert(!c_type_traits_is_int(_Atomic float));

    static_assert(!c_type_traits_is_int(double));
    static_assert(!c_type_traits_is_int(const double));
    static_assert(!c_type_traits_is_int(volatile double));
    static_assert(!c_type_traits_is_int(const volatile double));
    static_assert(!c_type_traits_is_int(_Atomic double));

    static_assert(!c_type_traits_is_int(long double));
    static_assert(!c_type_traits_is_int(const long double));
    static_assert(!c_type_traits_is_int(volatile long double));
    static_assert(!c_type_traits_is_int(const volatile long double));
    static_assert(!c_type_traits_is_int(_Atomic long double));

    static_assert(!c_type_traits_is_int(struct test_struct));
    static_assert(!c_type_traits_is_int(const struct test_struct));
    static_assert(!c_type_traits_is_int(volatile struct test_struct));
    static_assert(!c_type_traits_is_int(const volatile struct test_struct));
    static_assert(!c_type_traits_is_int(_Atomic struct test_struct));

    static_assert(!c_type_traits_is_int(enum test_enum));
    static_assert(!c_type_traits_is_int(const enum test_enum));
    static_assert(!c_type_traits_is_int(volatile enum test_enum));
    static_assert(!c_type_traits_is_int(const volatile enum test_enum));
    static_assert(!c_type_traits_is_int(_Atomic enum test_enum));

    static_assert(!c_type_traits_is_int(union test_union));
    static_assert(!c_type_traits_is_int(const union test_union));
    static_assert(!c_type_traits_is_int(volatile union test_union));
    static_assert(!c_type_traits_is_int(const volatile union test_union));
    static_assert(!c_type_traits_is_int(_Atomic union test_union));

    static_assert(!c_type_traits_is_int(void*));
    static_assert(!c_type_traits_is_int(void* const));
    static_assert(!c_type_traits_is_int(void* volatile));
    static_assert(!c_type_traits_is_int(void* const volatile));
    static_assert(!c_type_traits_is_int(void* _Atomic));
    static_assert(!c_type_traits_is_int(void* restrict));
    static_assert(!c_type_traits_is_int(void* const restrict));
    static_assert(!c_type_traits_is_int(void* volatile restrict));
    static_assert(!c_type_traits_is_int(void* const volatile restrict));

    static_assert(!c_type_traits_is_int(void*[]));
    static_assert(!c_type_traits_is_int(void* const[]));
    static_assert(!c_type_traits_is_int(void* volatile[]));
    static_assert(!c_type_traits_is_int(void* const volatile[]));
    static_assert(!c_type_traits_is_int(void* _Atomic[]));
    static_assert(!c_type_traits_is_int(void* restrict[]));
    static_assert(!c_type_traits_is_int(void* const restrict[]));
    static_assert(!c_type_traits_is_int(void* volatile restrict[]));
    static_assert(!c_type_traits_is_int(void* const volatile restrict[]));

    return true;
}

bool c_type_traits_testing_is_ptr_true_cases(void) {
    static_assert(c_type_traits_is_ptr(void*));
    static_assert(c_type_traits_is_ptr(void* const));
    static_assert(c_type_traits_is_ptr(void* volatile));
    static_assert(c_type_traits_is_ptr(void* const volatile));
    static_assert(c_type_traits_is_ptr(void* _Atomic));
    static_assert(c_type_traits_is_ptr(void* restrict));
    static_assert(c_type_traits_is_ptr(void* const restrict));
    static_assert(c_type_traits_is_ptr(void* volatile restrict));
    static_assert(c_type_traits_is_ptr(void* const volatile restrict));

    static_assert(c_type_traits_is_ptr(int*));
    static_assert(c_type_traits_is_ptr(int* const));
    static_assert(c_type_traits_is_ptr(int* volatile));
    static_assert(c_type_traits_is_ptr(int* const volatile));
    static_assert(c_type_traits_is_ptr(int* _Atomic));
    static_assert(c_type_traits_is_ptr(int* restrict));
    static_assert(c_type_traits_is_ptr(int* const restrict));
    static_assert(c_type_traits_is_ptr(int* volatile restrict));
    static_assert(c_type_traits_is_ptr(int* const volatile restrict));

    static_assert(c_type_traits_is_ptr(char*));
    static_assert(c_type_traits_is_ptr(char* const));
    static_assert(c_type_traits_is_ptr(char* volatile));
    static_assert(c_type_traits_is_ptr(char* const volatile));
    static_assert(c_type_traits_is_ptr(char* _Atomic));
    static_assert(c_type_traits_is_ptr(char* restrict));
    static_assert(c_type_traits_is_ptr(char* const restrict));
    static_assert(c_type_traits_is_ptr(char* volatile restrict));
    static_assert(c_type_traits_is_ptr(char* const volatile restrict));

    static_assert(c_type_traits_is_ptr(void**));
    static_assert(c_type_traits_is_ptr(void** const));
    static_assert(c_type_traits_is_ptr(void** volatile));
    static_assert(c_type_traits_is_ptr(void** const volatile));
    static_assert(c_type_traits_is_ptr(void** _Atomic));
    static_assert(c_type_traits_is_ptr(void** restrict));
    static_assert(c_type_traits_is_ptr(void** const restrict));
    static_assert(c_type_traits_is_ptr(void** volatile restrict));
    static_assert(c_type_traits_is_ptr(void** const volatile restrict));

    static_assert(c_type_traits_is_ptr(void***));
    static_assert(c_type_traits_is_ptr(void*** const));
    static_assert(c_type_traits_is_ptr(void*** volatile));
    static_assert(c_type_traits_is_ptr(void*** const volatile));
    static_assert(c_type_traits_is_ptr(void*** _Atomic));
    static_assert(c_type_traits_is_ptr(void*** restrict));
    static_assert(c_type_traits_is_ptr(void*** const restrict));
    static_assert(c_type_traits_is_ptr(void*** volatile restrict));
    static_assert(c_type_traits_is_ptr(void*** const volatile restrict));

    return true;
}

bool c_type_traits_testing_is_ptr_false_cases(void) {
    static_assert(!c_type_traits_is_ptr(intptr_t));
    static_assert(!c_type_traits_is_ptr(const intptr_t));
    static_assert(!c_type_traits_is_ptr(volatile intptr_t));
    static_assert(!c_type_traits_is_ptr(const volatile intptr_t));
    static_assert(!c_type_traits_is_ptr(_Atomic intptr_t));

    static_assert(!c_type_traits_is_ptr(uintptr_t));
    static_assert(!c_type_traits_is_ptr(const uintptr_t));
    static_assert(!c_type_traits_is_ptr(volatile uintptr_t));
    static_assert(!c_type_traits_is_ptr(const volatile uintptr_t));
    static_assert(!c_type_traits_is_ptr(_Atomic uintptr_t));

    static_assert(!c_type_traits_is_ptr(int));
    static_assert(!c_type_traits_is_ptr(const int));
    static_assert(!c_type_traits_is_ptr(volatile int));
    static_assert(!c_type_traits_is_ptr(const volatile int));
    static_assert(!c_type_traits_is_ptr(_Atomic int));

    static_assert(!c_type_traits_is_ptr(char));
    static_assert(!c_type_traits_is_ptr(const char));
    static_assert(!c_type_traits_is_ptr(volatile char));
    static_assert(!c_type_traits_is_ptr(const volatile char));
    static_assert(!c_type_traits_is_ptr(_Atomic char));

    static_assert(!c_type_traits_is_ptr(void*[]));
    static_assert(!c_type_traits_is_ptr(void* const[]));
    static_assert(!c_type_traits_is_ptr(void* volatile[]));
    static_assert(!c_type_traits_is_ptr(void* const volatile[]));
    static_assert(!c_type_traits_is_ptr(void* _Atomic[]));
    static_assert(!c_type_traits_is_ptr(void* restrict[]));
    static_assert(!c_type_traits_is_ptr(void* const restrict[]));
    static_assert(!c_type_traits_is_ptr(void* volatile restrict[]));
    static_assert(!c_type_traits_is_ptr(void* const volatile restrict[]));

    return true;
}

bool c_type_traits_testing_is_float_true_cases(void) {
    static_assert(c_type_traits_is_float(float));
    static_assert(c_type_traits_is_float(const float));
    static_assert(c_type_traits_is_float(volatile float));
    static_assert(c_type_traits_is_float(const volatile float));
    static_assert(c_type_traits_is_float(_Atomic float));

    static_assert(c_type_traits_is_float(double));
    static_assert(c_type_traits_is_float(const double));
    static_assert(c_type_traits_is_float(volatile double));
    static_assert(c_type_traits_is_float(const volatile double));
    static_assert(c_type_traits_is_float(_Atomic double));

    static_assert(c_type_traits_is_float(long double));
    static_assert(c_type_traits_is_float(const long double));
    static_assert(c_type_traits_is_float(volatile long double));
    static_assert(c_type_traits_is_float(const volatile long double));
    static_assert(c_type_traits_is_float(_Atomic long double));

    static_assert(c_type_traits_is_float(float32_t));
    static_assert(c_type_traits_is_float(const float32_t));
    static_assert(c_type_traits_is_float(volatile float32_t));
    static_assert(c_type_traits_is_float(const volatile float32_t));
    static_assert(c_type_traits_is_float(_Atomic float32_t));

    static_assert(c_type_traits_is_float(float64_t));
    static_assert(c_type_traits_is_float(const float64_t));
    static_assert(c_type_traits_is_float(volatile float64_t));
    static_assert(c_type_traits_is_float(const volatile float64_t));
    static_assert(c_type_traits_is_float(_Atomic float64_t));

    static_assert(c_type_traits_is_float(float128_t));
    static_assert(c_type_traits_is_float(const float128_t));
    static_assert(c_type_traits_is_float(volatile float128_t));
    static_assert(c_type_traits_is_float(const volatile float128_t));
    static_assert(c_type_traits_is_float(_Atomic float128_t));

    return true;
}

bool c_type_traits_testing_is_float_false_cases(void) {
    static_assert(!c_type_traits_is_float(int));
    static_assert(!c_type_traits_is_float(const int));
    static_assert(!c_type_traits_is_float(volatile int));
    static_assert(!c_type_traits_is_float(const volatile int));
    static_assert(!c_type_traits_is_float(_Atomic int));

    static_assert(!c_type_traits_is_float(char));
    static_assert(!c_type_traits_is_float(const char));
    static_assert(!c_type_traits_is_float(volatile char));
    static_assert(!c_type_traits_is_float(const volatile char));
    static_assert(!c_type_traits_is_float(_Atomic char));

    static_assert(!c_type_traits_is_float(bool));
    static_assert(!c_type_traits_is_float(const bool));
    static_assert(!c_type_traits_is_float(volatile bool));
    static_assert(!c_type_traits_is_float(const volatile bool));
    static_assert(!c_type_traits_is_float(_Atomic bool));

    static_assert(!c_type_traits_is_float(void*));
    static_assert(!c_type_traits_is_float(void* const));
    static_assert(!c_type_traits_is_float(void* volatile));
    static_assert(!c_type_traits_is_float(void* const volatile));
    static_assert(!c_type_traits_is_float(void* _Atomic));
    static_assert(!c_type_traits_is_float(void* restrict));
    static_assert(!c_type_traits_is_float(void* const restrict));
    static_assert(!c_type_traits_is_float(void* volatile restrict));
    static_assert(!c_type_traits_is_float(void* const volatile restrict));

    static_assert(!c_type_traits_is_float(void*[]));
    static_assert(!c_type_traits_is_float(void* const[]));
    static_assert(!c_type_traits_is_float(void* volatile[]));
    static_assert(!c_type_traits_is_float(void* const volatile[]));
    static_assert(!c_type_traits_is_float(void* _Atomic[]));
    static_assert(!c_type_traits_is_float(void* restrict[]));
    static_assert(!c_type_traits_is_float(void* const restrict[]));
    static_assert(!c_type_traits_is_float(void* volatile restrict[]));
    static_assert(!c_type_traits_is_float(void* const volatile restrict[]));

    return true;
}

bool c_type_traits_testing_is_complex_true_cases(void) {
    static_assert(c_type_traits_is_complex(float complex));
    static_assert(c_type_traits_is_complex(const float complex));
    static_assert(c_type_traits_is_complex(volatile float complex));
    static_assert(c_type_traits_is_complex(const volatile float complex));
    static_assert(c_type_traits_is_complex(_Atomic float complex));

    static_assert(c_type_traits_is_complex(double complex));
    static_assert(c_type_traits_is_complex(const double complex));
    static_assert(c_type_traits_is_complex(volatile double complex));
    static_assert(c_type_traits_is_complex(const volatile double complex));
    static_assert(c_type_traits_is_complex(_Atomic double complex));

    static_assert(c_type_traits_is_complex(long double complex));
    static_assert(c_type_traits_is_complex(const long double complex));
    static_assert(c_type_traits_is_complex(volatile long double complex));
    static_assert(c_type_traits_is_complex(const volatile long double complex));
    static_assert(c_type_traits_is_complex(_Atomic long double complex));

    return true;
}

bool c_type_traits_testing_is_complex_false_cases(void) {
    static_assert(!c_type_traits_is_complex(float));
    static_assert(!c_type_traits_is_complex(const float));
    static_assert(!c_type_traits_is_complex(volatile float));
    static_assert(!c_type_traits_is_complex(const volatile float));
    static_assert(!c_type_traits_is_complex(_Atomic float));

    static_assert(!c_type_traits_is_complex(double));
    static_assert(!c_type_traits_is_complex(const double));
    static_assert(!c_type_traits_is_complex(volatile double));
    static_assert(!c_type_traits_is_complex(const volatile double));
    static_assert(!c_type_traits_is_complex(_Atomic double));

    static_assert(!c_type_traits_is_complex(long double));
    static_assert(!c_type_traits_is_complex(const long double));
    static_assert(!c_type_traits_is_complex(volatile long double));
    static_assert(!c_type_traits_is_complex(const volatile long double));
    static_assert(!c_type_traits_is_complex(_Atomic long double));

    static_assert(!c_type_traits_is_complex(int));
    static_assert(!c_type_traits_is_complex(const int));
    static_assert(!c_type_traits_is_complex(volatile int));
    static_assert(!c_type_traits_is_complex(const volatile int));
    static_assert(!c_type_traits_is_complex(_Atomic int));

    static_assert(!c_type_traits_is_complex(char));
    static_assert(!c_type_traits_is_complex(const char));
    static_assert(!c_type_traits_is_complex(volatile char));
    static_assert(!c_type_traits_is_complex(const volatile char));
    static_assert(!c_type_traits_is_complex(_Atomic char));

    static_assert(!c_type_traits_is_complex(void*));
    static_assert(!c_type_traits_is_complex(void* const));
    static_assert(!c_type_traits_is_complex(void* volatile));
    static_assert(!c_type_traits_is_complex(void* const volatile));
    static_assert(!c_type_traits_is_complex(void* _Atomic));
    static_assert(!c_type_traits_is_complex(void* restrict));
    static_assert(!c_type_traits_is_complex(void* const restrict));
    static_assert(!c_type_traits_is_complex(void* volatile restrict));
    static_assert(!c_type_traits_is_complex(void* const volatile restrict));

    static_assert(!c_type_traits_is_complex(void*[]));
    static_assert(!c_type_traits_is_complex(void* const[]));
    static_assert(!c_type_traits_is_complex(void* volatile[]));
    static_assert(!c_type_traits_is_complex(void* const volatile[]));
    static_assert(!c_type_traits_is_complex(void* _Atomic[]));
    static_assert(!c_type_traits_is_complex(void* restrict[]));
    static_assert(!c_type_traits_is_complex(void* const restrict[]));
    static_assert(!c_type_traits_is_complex(void* volatile restrict[]));
    static_assert(!c_type_traits_is_complex(void* const volatile restrict[]));

    return true;
}

bool c_type_traits_testing_is_bool_true_cases(void) {
    static_assert(c_type_traits_is_bool(bool));
    static_assert(c_type_traits_is_bool(const bool));
    static_assert(c_type_traits_is_bool(volatile bool));
    static_assert(c_type_traits_is_bool(const volatile bool));
    static_assert(c_type_traits_is_bool(_Atomic bool));

    return true;
}

bool c_type_traits_testing_is_bool_false_cases(void) {
    static_assert(!c_type_traits_is_bool(int));
    static_assert(!c_type_traits_is_bool(const int));
    static_assert(!c_type_traits_is_bool(volatile int));
    static_assert(!c_type_traits_is_bool(const volatile int));
    static_assert(!c_type_traits_is_bool(_Atomic int));

    static_assert(!c_type_traits_is_bool(float));
    static_assert(!c_type_traits_is_bool(const float));
    static_assert(!c_type_traits_is_bool(volatile float));
    static_assert(!c_type_traits_is_bool(const volatile float));
    static_assert(!c_type_traits_is_bool(_Atomic float));

    static_assert(!c_type_traits_is_bool(char));
    static_assert(!c_type_traits_is_bool(const char));
    static_assert(!c_type_traits_is_bool(volatile char));
    static_assert(!c_type_traits_is_bool(const volatile char));
    static_assert(!c_type_traits_is_bool(_Atomic char));

    static_assert(!c_type_traits_is_bool(void*));
    static_assert(!c_type_traits_is_bool(void* const));
    static_assert(!c_type_traits_is_bool(void* volatile));
    static_assert(!c_type_traits_is_bool(void* const volatile));
    static_assert(!c_type_traits_is_bool(void* _Atomic));
    static_assert(!c_type_traits_is_bool(void* restrict));
    static_assert(!c_type_traits_is_bool(void* const restrict));
    static_assert(!c_type_traits_is_bool(void* volatile restrict));
    static_assert(!c_type_traits_is_bool(void* const volatile restrict));

    static_assert(!c_type_traits_is_bool(void*[]));
    static_assert(!c_type_traits_is_bool(void* const[]));
    static_assert(!c_type_traits_is_bool(void* volatile[]));
    static_assert(!c_type_traits_is_bool(void* const volatile[]));
    static_assert(!c_type_traits_is_bool(void* _Atomic[]));
    static_assert(!c_type_traits_is_bool(void* restrict[]));
    static_assert(!c_type_traits_is_bool(void* const restrict[]));
    static_assert(!c_type_traits_is_bool(void* volatile restrict[]));
    static_assert(!c_type_traits_is_bool(void* const volatile restrict[]));

    return true;
}

bool c_type_traits_testing_is_struct_true_cases(void) {
    static_assert(c_type_traits_is_struct(struct test_struct));
    static_assert(c_type_traits_is_struct(const struct test_struct));
    static_assert(c_type_traits_is_struct(volatile struct test_struct));
    static_assert(c_type_traits_is_struct(const volatile struct test_struct));
    static_assert(c_type_traits_is_struct(_Atomic struct test_struct));

    static_assert(c_type_traits_is_struct(test_struct_typedef));
    static_assert(c_type_traits_is_struct(const test_struct_typedef));
    static_assert(c_type_traits_is_struct(volatile test_struct_typedef));
    static_assert(c_type_traits_is_struct(const volatile test_struct_typedef));
    static_assert(c_type_traits_is_struct(_Atomic test_struct_typedef));

    return true;
}

bool c_type_traits_testing_is_struct_false_cases(void) {
    static_assert(!c_type_traits_is_struct(union test_union));
    static_assert(!c_type_traits_is_struct(const union test_union));
    static_assert(!c_type_traits_is_struct(volatile union test_union));
    static_assert(!c_type_traits_is_struct(const volatile union test_union));
    static_assert(!c_type_traits_is_struct(_Atomic union test_union));

    static_assert(!c_type_traits_is_struct(enum test_enum));
    static_assert(!c_type_traits_is_struct(const enum test_enum));
    static_assert(!c_type_traits_is_struct(volatile enum test_enum));
    static_assert(!c_type_traits_is_struct(const volatile enum test_enum));
    static_assert(!c_type_traits_is_struct(_Atomic enum test_enum));

    static_assert(!c_type_traits_is_struct(int));
    static_assert(!c_type_traits_is_struct(const int));
    static_assert(!c_type_traits_is_struct(volatile int));
    static_assert(!c_type_traits_is_struct(const volatile int));
    static_assert(!c_type_traits_is_struct(_Atomic int));

    static_assert(!c_type_traits_is_struct(char));
    static_assert(!c_type_traits_is_struct(const char));
    static_assert(!c_type_traits_is_struct(volatile char));
    static_assert(!c_type_traits_is_struct(const volatile char));
    static_assert(!c_type_traits_is_struct(_Atomic char));

    static_assert(!c_type_traits_is_struct(float));
    static_assert(!c_type_traits_is_struct(const float));
    static_assert(!c_type_traits_is_struct(volatile float));
    static_assert(!c_type_traits_is_struct(const volatile float));
    static_assert(!c_type_traits_is_struct(_Atomic float));

    static_assert(!c_type_traits_is_struct(void*));
    static_assert(!c_type_traits_is_struct(void* const));
    static_assert(!c_type_traits_is_struct(void* volatile));
    static_assert(!c_type_traits_is_struct(void* const volatile));
    static_assert(!c_type_traits_is_struct(void* _Atomic));
    static_assert(!c_type_traits_is_struct(void* restrict));
    static_assert(!c_type_traits_is_struct(void* const restrict));
    static_assert(!c_type_traits_is_struct(void* volatile restrict));
    static_assert(!c_type_traits_is_struct(void* const volatile restrict));

    static_assert(!c_type_traits_is_struct(void*[]));
    static_assert(!c_type_traits_is_struct(void* const[]));
    static_assert(!c_type_traits_is_struct(void* volatile[]));
    static_assert(!c_type_traits_is_struct(void* const volatile[]));
    static_assert(!c_type_traits_is_struct(void* _Atomic[]));
    static_assert(!c_type_traits_is_struct(void* restrict[]));
    static_assert(!c_type_traits_is_struct(void* const restrict[]));
    static_assert(!c_type_traits_is_struct(void* volatile restrict[]));
    static_assert(!c_type_traits_is_struct(void* const volatile restrict[]));

    return true;
}

bool c_type_traits_testing_is_enum_true_cases(void) {
    static_assert(c_type_traits_is_enum(enum test_enum));
    static_assert(c_type_traits_is_enum(const enum test_enum));
    static_assert(c_type_traits_is_enum(volatile enum test_enum));
    static_assert(c_type_traits_is_enum(const volatile enum test_enum));
    static_assert(c_type_traits_is_enum(_Atomic enum test_enum));

    static_assert(c_type_traits_is_enum(test_enum_typedef));
    static_assert(c_type_traits_is_enum(const test_enum_typedef));
    static_assert(c_type_traits_is_enum(volatile test_enum_typedef));
    static_assert(c_type_traits_is_enum(const volatile test_enum_typedef));
    static_assert(c_type_traits_is_enum(_Atomic test_enum_typedef));

    return true;
}

bool c_type_traits_testing_is_enum_false_cases(void) {
    static_assert(!c_type_traits_is_enum(struct test_struct));
    static_assert(!c_type_traits_is_enum(const struct test_struct));
    static_assert(!c_type_traits_is_enum(volatile struct test_struct));
    static_assert(!c_type_traits_is_enum(const volatile struct test_struct));
    static_assert(!c_type_traits_is_enum(_Atomic struct test_struct));

    static_assert(!c_type_traits_is_enum(union test_union));
    static_assert(!c_type_traits_is_enum(const union test_union));
    static_assert(!c_type_traits_is_enum(volatile union test_union));
    static_assert(!c_type_traits_is_enum(const volatile union test_union));
    static_assert(!c_type_traits_is_enum(_Atomic union test_union));

    static_assert(!c_type_traits_is_enum(int));
    static_assert(!c_type_traits_is_enum(const int));
    static_assert(!c_type_traits_is_enum(volatile int));
    static_assert(!c_type_traits_is_enum(const volatile int));
    static_assert(!c_type_traits_is_enum(_Atomic int));

    static_assert(!c_type_traits_is_enum(float));
    static_assert(!c_type_traits_is_enum(const float));
    static_assert(!c_type_traits_is_enum(volatile float));
    static_assert(!c_type_traits_is_enum(const volatile float));
    static_assert(!c_type_traits_is_enum(_Atomic float));

    static_assert(!c_type_traits_is_enum(char));
    static_assert(!c_type_traits_is_enum(const char));
    static_assert(!c_type_traits_is_enum(volatile char));
    static_assert(!c_type_traits_is_enum(const volatile char));
    static_assert(!c_type_traits_is_enum(_Atomic char));

    static_assert(!c_type_traits_is_enum(void*));
    static_assert(!c_type_traits_is_enum(void* const));
    static_assert(!c_type_traits_is_enum(void* volatile));
    static_assert(!c_type_traits_is_enum(void* const volatile));
    static_assert(!c_type_traits_is_enum(void* _Atomic));
    static_assert(!c_type_traits_is_enum(void* restrict));
    static_assert(!c_type_traits_is_enum(void* const restrict));
    static_assert(!c_type_traits_is_enum(void* volatile restrict));
    static_assert(!c_type_traits_is_enum(void* const volatile restrict));

    static_assert(!c_type_traits_is_enum(void*[]));
    static_assert(!c_type_traits_is_enum(void* const[]));
    static_assert(!c_type_traits_is_enum(void* volatile[]));
    static_assert(!c_type_traits_is_enum(void* const volatile[]));
    static_assert(!c_type_traits_is_enum(void* _Atomic[]));
    static_assert(!c_type_traits_is_enum(void* restrict[]));
    static_assert(!c_type_traits_is_enum(void* const restrict[]));
    static_assert(!c_type_traits_is_enum(void* volatile restrict[]));
    static_assert(!c_type_traits_is_enum(void* const volatile restrict[]));

    return true;
}

bool c_type_traits_testing_is_union_true_cases(void) {
    static_assert(c_type_traits_is_union(union test_union));
    static_assert(c_type_traits_is_union(const union test_union));
    static_assert(c_type_traits_is_union(volatile union test_union));
    static_assert(c_type_traits_is_union(const volatile union test_union));
    static_assert(c_type_traits_is_union(_Atomic union test_union));

    static_assert(c_type_traits_is_union(test_union_typedef));
    static_assert(c_type_traits_is_union(const test_union_typedef));
    static_assert(c_type_traits_is_union(volatile test_union_typedef));
    static_assert(c_type_traits_is_union(const volatile test_union_typedef));
    static_assert(c_type_traits_is_union(_Atomic test_union_typedef));

    return true;
}

bool c_type_traits_testing_is_union_false_cases(void) {
    static_assert(!c_type_traits_is_union(struct test_struct));
    static_assert(!c_type_traits_is_union(const struct test_struct));
    static_assert(!c_type_traits_is_union(volatile struct test_struct));
    static_assert(!c_type_traits_is_union(const volatile struct test_struct));
    static_assert(!c_type_traits_is_union(_Atomic struct test_struct));

    static_assert(!c_type_traits_is_union(enum test_enum));
    static_assert(!c_type_traits_is_union(const enum test_enum));
    static_assert(!c_type_traits_is_union(volatile enum test_enum));
    static_assert(!c_type_traits_is_union(const volatile enum test_enum));
    static_assert(!c_type_traits_is_union(_Atomic enum test_enum));

    static_assert(!c_type_traits_is_union(int));
    static_assert(!c_type_traits_is_union(const int));
    static_assert(!c_type_traits_is_union(volatile int));
    static_assert(!c_type_traits_is_union(const volatile int));
    static_assert(!c_type_traits_is_union(_Atomic int));

    static_assert(!c_type_traits_is_union(char));
    static_assert(!c_type_traits_is_union(const char));
    static_assert(!c_type_traits_is_union(volatile char));
    static_assert(!c_type_traits_is_union(const volatile char));
    static_assert(!c_type_traits_is_union(_Atomic char));

    static_assert(!c_type_traits_is_union(float));
    static_assert(!c_type_traits_is_union(const float));
    static_assert(!c_type_traits_is_union(volatile float));
    static_assert(!c_type_traits_is_union(const volatile float));
    static_assert(!c_type_traits_is_union(_Atomic float));

    static_assert(!c_type_traits_is_union(void*));
    static_assert(!c_type_traits_is_union(void* const));
    static_assert(!c_type_traits_is_union(void* volatile));
    static_assert(!c_type_traits_is_union(void* const volatile));
    static_assert(!c_type_traits_is_union(void* _Atomic));
    static_assert(!c_type_traits_is_union(void* restrict));
    static_assert(!c_type_traits_is_union(void* const restrict));
    static_assert(!c_type_traits_is_union(void* volatile restrict));
    static_assert(!c_type_traits_is_union(void* const volatile restrict));

    static_assert(!c_type_traits_is_union(void*[]));
    static_assert(!c_type_traits_is_union(void* const[]));
    static_assert(!c_type_traits_is_union(void* volatile[]));
    static_assert(!c_type_traits_is_union(void* const volatile[]));
    static_assert(!c_type_traits_is_union(void* _Atomic[]));
    static_assert(!c_type_traits_is_union(void* restrict[]));
    static_assert(!c_type_traits_is_union(void* const restrict[]));
    static_assert(!c_type_traits_is_union(void* volatile restrict[]));
    static_assert(!c_type_traits_is_union(void* const volatile restrict[]));

    return true;
}

bool c_type_traits_testing_is_array_true_cases(void) {
    static_assert(c_type_traits_is_array(int[]));
    static_assert(c_type_traits_is_array(const int[]));
    static_assert(c_type_traits_is_array(volatile int[]));
    static_assert(c_type_traits_is_array(const volatile int[]));
    static_assert(c_type_traits_is_array(_Atomic int[]));

    static_assert(c_type_traits_is_array(char[]));
    static_assert(c_type_traits_is_array(const char[]));
    static_assert(c_type_traits_is_array(volatile char[]));
    static_assert(c_type_traits_is_array(const volatile char[]));
    static_assert(c_type_traits_is_array(_Atomic char[]));

    static_assert(c_type_traits_is_array(float[]));
    static_assert(c_type_traits_is_array(const float[]));
    static_assert(c_type_traits_is_array(volatile float[]));
    static_assert(c_type_traits_is_array(const volatile float[]));
    static_assert(c_type_traits_is_array(_Atomic float[]));

    static_assert(c_type_traits_is_array(void*[]));
    static_assert(c_type_traits_is_array(void* const[]));
    static_assert(c_type_traits_is_array(void* volatile[]));
    static_assert(c_type_traits_is_array(void* const volatile[]));
    static_assert(c_type_traits_is_array(void* _Atomic[]));
    static_assert(c_type_traits_is_array(void* restrict[]));
    static_assert(c_type_traits_is_array(void* const restrict[]));
    static_assert(c_type_traits_is_array(void* volatile restrict[]));
    static_assert(c_type_traits_is_array(void* const volatile restrict[]));

    return true;
}

bool c_type_traits_testing_is_array_false_cases(void) {
    static_assert(!c_type_traits_is_array(void*));
    static_assert(!c_type_traits_is_array(void* const));
    static_assert(!c_type_traits_is_array(void* volatile));
    static_assert(!c_type_traits_is_array(void* const volatile));
    static_assert(!c_type_traits_is_array(void* _Atomic));
    static_assert(!c_type_traits_is_array(void* restrict));
    static_assert(!c_type_traits_is_array(void* const restrict));
    static_assert(!c_type_traits_is_array(void* volatile restrict));
    static_assert(!c_type_traits_is_array(void* const volatile restrict));

    static_assert(!c_type_traits_is_array(int));
    static_assert(!c_type_traits_is_array(const int));
    static_assert(!c_type_traits_is_array(volatile int));
    static_assert(!c_type_traits_is_array(const volatile int));
    static_assert(!c_type_traits_is_array(_Atomic int));

    static_assert(!c_type_traits_is_array(float));
    static_assert(!c_type_traits_is_array(const float));
    static_assert(!c_type_traits_is_array(volatile float));
    static_assert(!c_type_traits_is_array(const volatile float));
    static_assert(!c_type_traits_is_array(_Atomic float));

    static_assert(!c_type_traits_is_array(char));
    static_assert(!c_type_traits_is_array(const char));
    static_assert(!c_type_traits_is_array(volatile char));
    static_assert(!c_type_traits_is_array(const volatile char));
    static_assert(!c_type_traits_is_array(_Atomic char));

    return true;
}