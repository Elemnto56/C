#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "Hello World";
    char *ptr = string;

    printf("%p\n", ptr);
}