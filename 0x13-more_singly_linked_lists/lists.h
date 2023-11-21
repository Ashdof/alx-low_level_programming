#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;


/* prototypes of main functions */
size_t print_listint(const listint_t *);

/* prototypes of helper functions */
int _putchar(char);

#endif /* LISTS_H */
