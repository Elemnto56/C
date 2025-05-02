#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int vowel_count(const char *str);

int main() {
    char name[] = "Jamestown";
    printf("%d\n", vowel_count(name));
    return 0;
}

int vowel_count(const char *str) {
    int count = 0;
    int length = sizeof(str) / sizeof(*str);

    for (int i = 0; i <= length; i++) {
        if (str[i] == 'a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] =='u') {
            count++;
        } else {
            continue;
        }
    }
    return count;
}