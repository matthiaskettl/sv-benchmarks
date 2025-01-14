extern void abort(void); 
void reach_error(){}

extern int __VERIFIER_nondet_int();
/*
 * Simple example: build a list with only 1s and finally a 0 (arbitrary length); 
 * afterwards, go through it and check if the list does have the correct form, and in particular
 * finishes by a 0.
 */
#include <stdlib.h>

void myexit(int s) {
	_EXIT: goto _EXIT;
}

typedef struct node {
  int h;
  struct node *n;
} *List;

int main() {
  /* Build a list of the form 1->...->1->0 */
  List t;
  List p = 0;
  while (__VERIFIER_nondet_int()) {
    t = (List) malloc(sizeof(struct node));
    if (t == 0) myexit(1);
    t->h = 1;
    t->n = p;
    p = t;
  }
  while (p!=0) {
    if (p->h != 1) {
	ERROR: {reach_error();abort();}
    }
    p = p->n;
  }

}

