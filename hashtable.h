#ifndef HASHTABLE_H  
#define HASHTABLE_H  

#define HASH_MAX 10 

unsigned int hash(char * str);  

typedef char data[20];  

typedef struct node {  
   data word;  
   struct node* next;  
} node;  

typedef struct {  
   node* origin;  
   int qtd;  
} list;  

void init_list(list* l);  

void add_node(list* l, data word);  

void print_list(list l);  

#endif // HASHTABLE_H