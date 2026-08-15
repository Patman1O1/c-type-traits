#ifndef C_TYPE_TRAITS_H
#define C_TYPE_TRAITS_H

#ifndef __GNUC__
#error "Only GCC and Clang compiler toolchains are allowed."
#endif // #ifndef __GNUC__

// ISO Includes
#include <complex.h>
#include <stdio.h>
#include <stdbool.h>

#define c_type_traits_is_int(type) \
    (__builtin_classify_type(type) == 1)

#define c_type_traits_is_ptr(type) \
    (__builtin_classify_type(type) == 5)

#define c_type_traits_is_float(type) \
    (__builtin_classify_type(type) == 8)

#define c_type_traits_is_complex(type) \
    (__builtin_classify_type(type) == 9)

#define c_type_traits_is_bool(type) \
    (__builtin_classify_type(type) == 4)

#define c_type_traits_is_struct(type) \
    (__builtin_classify_type(type) == 12)

#define c_type_traits_is_enum(type) \
    (__builtin_classify_type(type) == 3)

#define c_type_traits_is_union(type) \
    (__builtin_classify_type(type) == 13)

#define c_type_traits_is_array(type) \
    (__builtin_classify_type(type) == 14)


#endif // #ifndef C_TYPE_TRAITS_H

