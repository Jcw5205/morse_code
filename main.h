#include <stdio.h>
/*
    main.c: handle inputs and outputs of morse code and 
    tree.c: create the binary tree and convert between morse code and characters
*/

typedef struct Node{
    char val;
    tree_node_t* dot;
    tree_node_t* dash;
} tree_node_t;

char* character_to_morse_code();

void create_tree();

extern tree_node_t MORSE_TREE[40];
