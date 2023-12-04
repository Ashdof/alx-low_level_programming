# Simple Shell Exercises
The activities in this repository are the accompanying exercises for the [Simple Shell Project]() I did while in training at ALX. These are not mandatory questions; it was a resource material shared to give us advance knowledge of the underlying concepts of Process Identification **PID** and Parent Process Identification **PPID** in Linux.

## Process
A process is a program in execution. There are two main types of processes: <br /><br />

**Foreground Processes** <br />
These are interactive processes that are manipulated through the command-line in a terminal session. Such processes are mostly started by the user.

**Background Processes** <br />
These are non-interactive processes that start when the system boots up. Such processes are not connected to the terminal nor do they require a user to operate them. An example is a *daemon*

## Process ID
This is a unique identification number assigned to a process.

## Parent Process
This is process that creates other processes

## Child Process
This is a process that is created by other processes, also known as Parent Process.

## Viewing Processes
The processes of a system can be viewed with the `ps` command

# Reference Resources
The reference materials for this activity are:
- [Stack Exchange](https://unix.stackexchange.com/questions/16883/what-is-the-maximum-value-of-the-process-id)
- [ALX Resource](intranet.alxswe.com/concepts/64)
- [Process in Linux](data-flair.training/blogs/process-in-linux)

# Questions
0. Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does echo $$ print the same value? Why?
1. Write a shell script that prints the maximum value a process ID can be.
2. Write a program that prints all the arguments, without using ac.
3. a. Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.
3. b. Write your own version of getline.
4. Write a function that splits a string and returns an array of each word of the string.
5. Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.
6. Using everything we saw, write a first version of a super simple shell that can run commands with their full path, without any argument.
7. Write a program that looks for files in the current PATH.
8. Write a program that prints the environment using the global variable environ.
9. Write a program that prints the address of env (the third parameter of the main function) and environ (the global variable). Are they they same? Does this make sense?
10. Write a function that gets an environment variable. (without using getenv)
11. Write a function that prints each directory contained in the the environment variable PATH, one directory per line.
12. Write a function that builds a linked list of the PATH directories.
13. Write a function that changes or adds an environment variable (without using setenv).
14. Write a function that deletes the variable name from the environment (without using unsetenv).
