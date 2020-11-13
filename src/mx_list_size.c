#include "../inc/libmx.h"

int mx_list_size(t_list *list) 
{
    int count_size = 0;
    t_list *temp = NULL;
    if (list) {
        temp = list;
        while (temp != NULL) {
            count_size++;
            temp = temp->next;
        }
    }
    return count_size;
}
