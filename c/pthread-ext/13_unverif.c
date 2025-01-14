extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
extern void abort(void); 
void reach_error(){}

//Symmetry-Aware Predicate Abstraction for Shared-Variable Concurrent Programs (Extended Technical Report). CoRR abs/1102.2330 (2011)

#include <pthread.h>

#define assume(e) assume_abort_if_not(e)
#define assert(e) { if(!(e)) { ERROR: {reach_error();abort();}(void)0; } }

unsigned int r = 0;
unsigned int s = 0;

void __VERIFIER_atomic_inc_r()
{
  assume(r!=-1); //to avoid overflows
  r = r + 1; 
}

void* thr1(void* arg){
  unsigned int l = 0;

  __VERIFIER_atomic_inc_r();
  if(r == 1){
    L3: s = s + 1;
    l = l + 1;
    assert(s == l);
    goto L3;
  }

  return 0;
}

int main(){
  pthread_t t;

  while(1){
    pthread_create(&t, 0, thr1, 0);
  }
}

