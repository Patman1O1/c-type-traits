#ifndef C_TYPE_TRAITS_H
#define C_TYPE_TRAITS_H

// ISO Includes
#include <complex.h>
#include <stdio.h>
#include <stdbool.h>

#define c_type_traits_is_primitive(type) _Generic((typeof_unqual(type)){0}, \
    bool:                true, \
    char:                true, \
    unsigned char:       true, \
    signed char:         true, \
    short int:           true, \
    unsigned short int:  true, \
    int:                 true, \
    unsigned int:        true, \
    long int:            true, \
    unsigned long int:   true, \
    float:               true, \
    float complex:       true, \
    double:              true, \
    double complex:      true, \
    long double:         true, \
    long double complex: true, \
    default:             false \
)

#endif // #ifndef C_TYPE_TRAITS_H

