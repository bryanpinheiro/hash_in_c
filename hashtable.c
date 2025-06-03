#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hashtable.h"

unsigned int hash(char* str)
{
    unsigned int sum = 0;
	for (int j = 0; str[j] != '\0'; j++)
	{
		sum += str[j];
	}
	return sum % HASH_MAX;
}

void init_list(list* l) {
    l->origin = NULL;
    l->qtd = 0;
}

void add_node(list* l, data word) {
    node* new_node = (node*)malloc(sizeof(node));
    if (new_node == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    strcpy_s(new_node->word, sizeof(new_node->word), word);
    new_node->next = l->origin;
    l->origin = new_node;
    l->qtd++;
}

void print_list(list l) {
    node* current = l.origin;
    while (current != NULL) {
        printf("%s -> ", current->word);
        current = current->next;
    }
    printf("NULL\n");
}