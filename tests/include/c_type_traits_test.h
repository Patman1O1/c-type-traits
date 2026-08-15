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

extern bool c_type_traits_testing_is_complex_complex(void);

extern bool c_type_traits_testing_is_complex_non_complex(void);

extern bool c_type_traits_testing_is_complex_alias_complex(void);

extern bool c_type_traits_testing_is_struct_struct(void);

extern bool c_type_traits_testing_is_struct_non_struct(void);

extern bool c_type_traits_testing_is_struct_alias_struct(void);

extern bool c_type_traits_testing_is_enum_enum(void);

extern bool c_type_traits_testing_is_enum_non_enum(void);

extern bool c_type_traits_testing_is_enum_alias_enum(void);

extern bool c_type_traits_testing_is_union_union(void);

extern bool c_type_traits_testing_is_union_non_union(void);

extern bool c_type_traits_testing_is_union_alias_union(void);

extern bool c_type_traits_testing_is_array_array(void);

extern bool c_type_traits_testing_is_array_non_array(void);

extern bool c_type_traits_testing_is_function_function(void);

extern bool c_type_traits_testing_is_function_non_function(void);


#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef C_TYPE_TRAITS_TEST_H

