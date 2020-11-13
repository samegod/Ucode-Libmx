#include "../inc/libmx.h"

int num_len(unsigned long num) {
    int length = 0;

    while (num) {
        num /= 16;
        length++;
    }
    return length;
}
