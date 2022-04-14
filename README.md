# Simple Shell

## Description

This project focuses on creating a shell, whirch is a command interpreter program for unix-based operating systems.
The shell allows the user to communicate with the operating system interactively through the commands that the user enters.
Its function is to read the command line, interpret its meaning, carry out the command, and then output the result via the outputs.
To carry out this project, the c language was used.

## Files

* shell.h
* main.c
* new_procees
* own_cd.c
* own_env.c
* own_exit.c
* read_line.c
* read_stream.c
* shell_interactive.c
* shell_non_interactive.c
* split_line.c

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

## Authors

Santiago Bedoya https://github.com/santiagobedoa

Alejandro Urán https://github.com/alejuran
