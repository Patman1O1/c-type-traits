#ifndef C_TYPE_TRAITS_TEST_H
#define C_TYPE_TRAITS_TEST_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif // #ifdef __cplusplus

extern bool c_type_traits_testing_is_int_ints(void);

extern bool c_type_traits_testing_is_int_non_ints(void);

extern bool c_type_traits_testing_is_int_alias_ints(void);

extern bool c_type_traits_testing_is_ptr_ptr_types(void);

extern bool c_type_traits_testing_is_ptr_non_ptr_types(void);

extern bool c_type_traits_testing_is_float_floats(void);

extern bool c_type_traits_testing_is_float_non_floats(void);

extern bool c_type_traits_testing_is_float_alias_floats(void);

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef C_TYPE_TRAITS_TEST_H

