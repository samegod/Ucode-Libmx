#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    bool state = true;
    unsigned wc = 0;
    int delim = 0;
    
    if (str == NULL)
        return -1;
    else {
        while (str[delim]) {
            if (str[delim] == c)
                state = true;
            else if (state == true) {
                state = false;
                ++wc;
            }
            ++delim;
        }
        return wc;
    }
}
