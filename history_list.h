#ifndef HISTORY_LIST_H
#define HISTORY_LIST_H

struct node {
    char* data;
    struct node* next;
};

void build_history_list(struct node** head, char* line);

#endif
