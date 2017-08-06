#include <stdio.h>
#include <malloc.h>

typedef struct Node {
    void *value;
    struct Node* next;
    struct Node* back;
}Node;

typedef struct List {
    struct Node* head;
    int number_of_nodes;
    int sum_of_values;
}List;


List* list_init(){
    List *l = (List*)malloc(sizeof(List));
    l->head = NULL;
    l->number_of_nodes = 0;
    l->sum_of_values = 0;
    return l;
}

Node* Node_init(void* value){
    Node* node = (Node*)malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    node->back = NULL;
    return node;

}
void remove_list(List* list) {
    int size = list->number_of_nodes;
    int i = 0;
    Node* np = list->head;
    for (i; i < size; ++i) {
        free(np);
        ++np;
    }
}

void add_node(List* list, Node* node){
    Node* np = list->head;
    np += list->number_of_nodes;


    if(list->number_of_nodes > 0){
        np->next = node;
        node->back = np;
    }

    ++list->number_of_nodes;

}

/*Needs work!!!*/
void remove_node(Node* node){

    Node* next = node->next;
    Node* back = node->back;
    if(node->next != NULL && back->next != NULL)
        back->next = next;
    free(&node);
}

Node* get_next(Node* node){
    return node->next;
}
Node* get_back(Node* node){
    return node->back;
}
void* get_value(Node* node){
    return node->value;
}
double get_avrg(List* list){
    return (double)list->sum_of_values / list->number_of_nodes;
}



int main() {
    List* list = list_init();
    int value = 44, value1 = 55;
    Node* n1 = Node_init(&value);

    add_node(list, n1);

    printf("%d\n", *(int *)get_value(n1));
    printf("Hello, World!\n");
    return 0;
}