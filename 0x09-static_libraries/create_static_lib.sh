#!/bin/bash

# Compile each .c file into object files
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Cleanup: remove the object files
rm *.o

echo "Static library liball.a created successfully."
