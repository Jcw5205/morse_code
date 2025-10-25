#include "main.h"

void create_tree(){
    tree_node_t* ptr = &MORSE_TREE;
    ptr->dash = create_node();
    ptr->dash->dash = create_node();
    ptr->dash->dot = create_node();
    ptr->dash->dash->dot = create_node();
    ptr->dot = create_node();
    ptr->dot = create_node();
}

tree_node_t create_node(char x){
    tree_node_t node;
    node.val = x;
    node.dash = NULL;
    node.dot = NULL;
    return node; 
}

int main(){
    return 0;
}
