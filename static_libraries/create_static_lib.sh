#!/bin/bash
#script that creates a static library from all the .c files in the current dir

gcc -c
ar rcs liball.a

