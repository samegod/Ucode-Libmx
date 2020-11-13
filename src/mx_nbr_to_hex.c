#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *number = NULL;
    unsigned long num = nbr;
    int length = num_len(nbr);
    int temp;

    number = malloc(length);
    if (nbr == 0)
        return mx_strcpy(number, "0");
    while (num) {
        temp = num % 16;
        if (temp < 10)
            number[--length] = 48 + temp;
        if (temp >= 10)
            number[--length] = 87 + temp;
        num /= 16;
    }
    return number;
}
