#ifndef C_TYPE_TRAITS_TEST_H
#define C_TYPE_TRAITS_TEST_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif // #ifdef __cplusplus

extern bool c_type_traits_testing_is_integral_ints(void);

extern bool c_type_traits_testing_is_integral_non_ints(void);

extern bool c_type_traits_testing_is_integral_alias_ints(void);

extern bool c_type_traits_testing_is_pointer_ptr_types(void);

extern bool c_type_traits_testing_is_pointer_non_ptr_types(void);

extern bool c_type_traits_testing_is_floating_point_floats(void);

extern bool c_type_traits_testing_is_floating_point_non_floats(void);

extern bool c_type_traits_testing_is_floating_point_alias_floats(void);

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef C_TYPE_TRAITS_TEST_H

