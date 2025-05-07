#!/bin/bash

PROGRAM="./main.exe"

# Ask for the memory address
read -p "Enter memory address (example 0x55555555d0dc): " ADDRESS

# Ask for the character you want to write
read -p "Enter single character to write (example A): " CHAR

if [ -z "$ADDRESS" ] || [ -z "$CHAR" ]; then
  echo "Address or character missing. Exiting."
  exit 1
fi

# Convert character to ASCII hex value
VALUE=$(printf "0x%X" "'$CHAR")

echo "Writing $CHAR (value $VALUE) to address $ADDRESS"

# Launch GDB and edit memory
gdb -q "$PROGRAM" <<EOF
break main
run
set {char}$ADDRESS = $VALUE
continue
EOF