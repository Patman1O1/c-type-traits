#ifndef C_TYPE_TRAITS_H
#define C_TYPE_TRAITS_H

#ifndef __GNUC__
#error "Only GCC and Clang compiler toolchains are allowed."
#endif // #ifndef __GNUC__

// ISO Includes
#include <complex.h>
#include <stdio.h>
#include <stdbool.h>

#define c_type_traits_is_integral(type) \
    (__builtin_classify_type(type) == 1)

#define c_type_traits_is_pointer(type) \
    (__builtin_classify_type(type) == 5)

#define c_type_traits_is_floating_point(type) \
    (__builtin_classify_type(type) == 8)

#endif // #ifndef C_TYPE_TRAITS_H

