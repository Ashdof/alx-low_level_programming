# 0x0B. C - Malloc, Free
This lesson in low level programming introduced us to manual memory management. We had an in-depth understanding of allocating memory dynamically.

**Dynamic Memory Allocation**
It is the process of allocating memory during the execution of a program. The C programming language provides four functions for managing memory dynamically. They include:
- malloc()
- calloc()
- realloc()
- free()
However, this lesson placed greater focus on *malloc()* function.

**malloc() Function**
This function is used to allocate space in memory during program runtime. After allocating the space, this function does not initialize it with any value; it carries garbage value instead.

malloc() function returns a null pointer if it cannot allocate the memory requested.

## General Objectives
At the end of the lesson, we were able to:
- Explain the difference between automatic and dynamic allocation
- Explain malloc and free and demonstrated how to use them
- Identified the reason for using malloc 
- Identified when to use malloc
- Demonstrated how to use valgrind to check for memory leak

**Valgrind**
This is a programming tool for memory debugging, memory leak detection and profiling

# Reference Resources
The reference materials used in this lesson include: 
- [Dynamic Memory Allocation in C](https://intranet.alxswe.com/rltoken/pfGb2oVIYLO_1a8jtFGQYw)
