#ifndef LISTS_H
#define LISTS_H
typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

#endif /* LISTS_H */

