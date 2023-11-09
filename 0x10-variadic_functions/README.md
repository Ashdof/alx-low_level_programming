# 0x10. C - Variadic Functions
A **variadic function** is a function that accepts a variable number of arguments. Unlike the other functions that have a fixed number of arguments, a variadic function accepts arguments of any number.

In defining a variadic function, special macros from the **<stdarg.h>** header file must be included in the file in which the function is defined. These macros are: *va_list, va_arg, va_start, and va_end.*

**va_list** is used to declare a variable that will hold the list of arguments passed to the function.

**va_start** is used to initialise *va_list* variable and it must be passed the last non-variadic argument.

**va__arg** is used to retrieve the next argument from the *va_list*

**va_end** is used to clean up the *va_list* after all arguments have been retrieved.

# General Objectives
At the end of the lesson, we were able to:
- Define variadic functions
- Described how to use va_start, va_arg and va_end macros
- Identified why and how to use the const type qualifier

# Reference Resources
The reference materials used in this lesson are:
- [stdarg.h](https://intranet.alxswe.com/rltoken/wLRJdO8pA2-Vb-rF2Y71sA)
- [Variadic Functions](https://intranet.alxswe.com/rltoken/3gW8GycmyjarbJR76FkrzA)
- [Const Keyword](https://intranet.alxswe.com/rltoken/_RRPCY32VODyN_r2HIEnBQ)
