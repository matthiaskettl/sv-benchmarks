extern int __VERIFIER_nondet_int();
extern void abort(void); 
void reach_error(){}

#include <stdlib.h>

struct mem {
    int val;
};

struct list_node {
    int x;
    struct mem *mem;
    struct list_node *next;
};

int main() {
    struct mem *m = malloc(sizeof(*m));
    m->val = 100;

    struct list_node *head = malloc(sizeof(*head));
    head->x = 1;
    head->mem = m;
    head->next = head;

    struct list_node *list = head;

    while (__VERIFIER_nondet_int()) {
        int x = __VERIFIER_nondet_int();
        if (x > 0 && x < 10) {
            struct list_node *n = malloc(sizeof(*n));
            n->x = x;
            n->mem = m;
            n->next = head;
            list->next = n;
        }
    }

    list = head;
    while (list) {
        if (list->mem->val <= 100)
            list->mem->val += list->x;
        else
            list->mem->val -= list->x;
        list = list->next;

        if (!(m->val > 90 && m->val < 110))
            {reach_error();abort();}
    }
}
