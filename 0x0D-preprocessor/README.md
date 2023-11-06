# 0x0D. C - Preprocessor
In this lesson of low level programming, we learned about the **preprocessor** and **macros**

### The Preprocessor
This is a piece of software that edits *C programs* just prior to compilation. The preprocessor mainly responds to **preprocessing directives**. These are commamds that begin with the **#** character. Examples include: *#define, #include, #error, #line, #undef, #pragma* etc.

### Macro
A macro is a name that represents something else, such as a constant or a frequently used expression.

### Types of Macros
There are two types of macros:

**Simple Macros**
These are macros that have no parameters. They are mostly used to define names for constants. They are also known as *object-like macros* Examples:
- #define NAME 1000
- #define MEM_ERROR "Error: not enough memory"

**Parameterized Macros**
Also known as *function-like macros,* they are macros that have parameters. They are used to define names for frequently used expressions. Examples:
- #define IS_ODD(n) ((n) % 2 != 0)
- #define TOUPPER(c) ((c) >= 'a' && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

### How the Preprocessor Works
The preprocessor responds to a *#define* directive by storing the name of the macro together with its definition. It then **expands** the macro by replacing it by its defined value when the macro is used later in the program.

# General Objectives
At the end of the lesson, we were able to:
- Define macros and explain how to use them
- State the most common predefined macros
- Include guard for header files

# Reference Resources
The reference materials used for this lessons include:
- [Understanding C Program Compilation Process](https://intranet.alxswe.com/rltoken/X0ithSsqlz_D0c8V8uA1HQ)
- [Object-like Macros](https://intranet.alxswe.com/rltoken/kaqIw352MSJ8xoi1xU09ZA)
- [Macro Arguments](https://intranet.alxswe.com/rltoken/wcQZzunlgjepxExZFc2ORQ)
- [The Preprocessor Directives in C](https://intranet.alxswe.com/rltoken/S4zfCHzg82fUAxdt8_SaZQ)
- [The C Preprocessor](https://intranet.alxswe.com/rltoken/G33GiOIZofiIN4Tx9_acbQ)
- [Standard Predefined Macros](https://intranet.alxswe.com/rltoken/0OYhpL2cJfsIMBWhTuZsAA)
- [Include Guard](https://intranet.alxswe.com/rltoken/oF2vgIZNePdU965jCEZLHA)
- [Common Predefined Macros](https://intranet.alxswe.com/rltoken/ROl5xAMKX-JpenEqmf7FnQ)
