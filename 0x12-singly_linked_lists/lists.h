#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct list - singly linked list
 * @str: string
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);



#endif
