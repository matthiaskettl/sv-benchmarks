extern void abort(void); 
void reach_error(){}

extern int __VERIFIER_nondet_int();
/*
 * Variation on example 0: use a (non-deterministic) boolean
 * flag to set the value of the elements in the list before
 * 3 to a value depending on the flag, and check later on
 * that the list is what has been built just before.
 */
#include <stdlib.h>
/*  #include "assert.h" */

void myexit(int s) {
 _EXIT: goto _EXIT;
}

typedef struct node {
  int h;
  int flag;
  struct node *n;
} *List;

int main() {  
  List p, a, t;

  /* Build a list of the form 1->2->2->...->1->3
   * with 1,2 depending on some flag
   */
  a = (List) malloc(sizeof(struct node));
  if (a == 0) myexit(1);
  a->n = 0;
  p = a;
  
  int i = 0;
  while (i < 20 && __VERIFIER_nondet_int()) {
    i++;
    
    p->flag = __VERIFIER_nondet_int();
  
    if (p->flag) {
      p->h = 1;
    } else {
      p->h = 2;
    }

    t = (List) malloc(sizeof(struct node));

    if (t == 0) myexit(1);

    p->n = t;
    p = p->n;
  }
  p->h = 3;
    
  /* Check it */
  p = a;
 
  while (p->h != 3) {
    if (p->flag) {
        if (p->h != 1)
            goto ERROR;
    } else {
        if (p->h != 2)
            goto ERROR;
    }    
    p = p->n;
    i++;
  }
            
  if (p->h != 3 || i > 20)
    goto ERROR;

  /* free memory */
  p = a;
  // is list empty?
  if (p == 0) {
    myexit(1);
  } 
  // has list one element?
  else if (p->n == 0) {
    free(p);
    p = NULL;    
  }
  // list has more than one element
  else {
    while (p->n != 0) {
      t = p->n;
      free(p);
      p = t;
    }
    free(p);
  }
  return 0;

  ERROR: {reach_error();abort();}
}
