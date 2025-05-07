#include <stdlib.h>
#include <stdio.h>

int main() {
    char string[] = "Hello World";
    char *ptr = string;

    printf("%p\n", ptr);
    printf("%s\n", string);
}