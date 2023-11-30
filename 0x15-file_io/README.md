# 0x15. C - File I/O
In this lesson of low level programming, we were introduced to the concept of file input/output management, also known as **input and output system calls**.

**Input/Output System Calls** <br />
These are requests made by a program to the operating system kernel for services it can't access directly. Examples of such services include process control, file management and inter-process communications.

## Terminologies
The following are some terminologies associated with system input and output call operations.

**File Descriptor** <br />
It is an integer value that represents an opened file of a process. Each process in the operating system has three file descriptors:
- 0: this is assigned to *stdin (standard input)*
- 1: this is assigned to *stdout (standard output)*
- 2: this is assigned to *stderr (standard error)*

**File Descriptor Table** <br />
This is a table of an array of integer indicies, where each index corresponds to a file descriptor.

## Input and Output System Calls
There are five input/output system calls. These operate on files and set the modes of operation. The prototypes of these functions are declared in the **<unistd.h>** header file. The modes for operating on files are in the **<fcntl.h>** header file.

- **creat**: This is used to create a new empty file.
- **open**: This is used to open a file. It can be made to create the file if it does not exist.
- **read**: This call is used to read the contents of an opened file.
- **write**: This is used to write data to an opened file.
- **close**: This is used to instruct the operating system close a file after working with it.

## General Objectives
At the end of the lesson, we were able to:
- search for the right source of information online
- utilise the five system calls to manaipulate files
- define file descriptors
- identify the 3 standard file descriptors
- describe the purpose of the 3 standard file descriptors and their POSIX names
- explain how to use the I/O system calls open, close, read and write
- define and practice with the flags O_RDONLY, O_WRONLY, O_RDWR
- define file permissions, and described how to set them when creating a file with the open system call
- explain what a system call is
- state the difference between a function and a system call

## Reference Resources
The reference materials used for this lesson include
- [File Descriptors](https://intranet.alxswe.com/rltoken/Duva-9Fjyskt39R__Nnazg)
- [C Programming in Linux Tutorial #024](https://intranet.alxswe.com/rltoken/x05veqiLPSxXmJf9zTtCkQ)
- [CS360 Lecture notes - Introduction to System Calls (I/O System Calls)](http://www.cs.utk.edu/~huangj/cs360/360/notes/Syscall-Intro/lecture.html)
- [Input-output system calls in C | Create, Open, Close, Read, Write](www.skillvertex.com /blog/input-output-system-calls-in-c-create-open-close-read-write/)
- [Input-output system calls in C | Create, Open, Close, Read, Write](www.geeksforgeeks.org /input-output-system-calls-c-create-open-close-read-write/)
- [Read() System Call Function in C Language](linuxhint.com /read-system-call-in-c/)
