#ifndef __MACRO_H
#define __MACRO_H

#define var(postfix) var_##postfix 

#define var_type(type,postfix) __typeof__(type) var_##postfix

#endif

