#include <stdlib.h>
#include <stdio.h>

int main() {
    char string[100] = "Hello World";
    char *ptr = string;

    printf("%p\n", ptr);
}