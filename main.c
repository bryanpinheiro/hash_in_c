/* 
* 
* A Hash table is an array of lists, where each list is a linked list of data items.
* A Hash function returns a nonnegative integer value called a hash code.
* This program solves the collisions using chaining. So it has the complexity of O(1).
* 
*/

#include <stdio.h>
#include "hashtable.h"

int main() {
  
    list hash_table[HASH_MAX];

    for (int i = 0; i < HASH_MAX; i++) {
        init_list(&hash_table[i]);
    }

    char* words[] = { "pirate", "jack", "sparrow", "pirate", "arrrghh", "boat", "horse", "gun", "gold"};

    for (int i = 0; i < 8; i++) {
        unsigned int index = hash(words[i]);
        add_node(&hash_table[index], words[i]);
    }

    for (int i = 0; i < HASH_MAX; i++) {
        printf("Index %d: ", i);
        print_list(hash_table[i]);
    }

    return 0;
}