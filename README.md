![alt text](https://opensource.com/sites/default/files/lead-images/terminal_command_linux_desktop_code.jpg)

# Simple Shell

## Description

This project focuses on creating a shell, whirch is a command interpreter program for unix-based operating systems.
The shell allows the user to communicate with the operating system interactively through the commands that the user enters.
Its function is to read the command line, interpret its meaning, carry out the command, and then output the result via the outputs.
To carry out this project, the c language was used.

## Files

| Name | Description |
| ------------------------------ | -------------------------------------------- |
| AUTHORS | Contributors in this repository.|
| man_1_simple_shell | Manual of simple_shell. |
| shell.h | Header file program. |
| main.c | Main function, interactive and non-interactive. |
| new_procees.c | Function that creates a new process. |
| own_cd.c | Change the working directory. |
| own_env.c | Function that prints environment variables. |
| own_exit.c | Exit shell with a given state. |
| own_help.c | Function that prints help (get information about a command) |
| read_line.c | Read a line from stdin. |
| read_stream.c | Read a line from the stream. |
| shell_interactive.c | Run shell interactive mode. |
| shell_non_interactive.c | Run shell non-interactive mode. |
| split_line.c | Split a string into tokens. |
| execute_args.c | Number of builtin functions. |

## List of functions and system calls.

* chdir (man 2 chdir)
* exit (man 3 exit)
* fork (man 2 fork)
* free (man 3 free)
* getline (man 3 getline)
* isatty (man 3 isatty)
* malloc (man 3 malloc)
* perror (man 3 perror)
* strtok (man 3 strtok)
* waitpid (man 2 waitpid)


## Requeriments

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

## Install

Clone the repository https://github.com/santiagobedoa/simple_shell.git

Compile gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Usage

Interactive mode: ./hsh

Non-interactive mode: echo "/bin/ls" | ./hsh

### Built-ins

* [x] cd
* [x] env
* [x] help
* [x] exit

## Authors

Santiago Bedoya https://github.com/santiagobedoa

Alejandro Urán https://github.com/alejuran
