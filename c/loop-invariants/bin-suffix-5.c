extern void abort(void); 
void reach_error(){}
extern int __VERIFIER_nondet_int();
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
int main(void) {
  unsigned int x = 5;
  while (__VERIFIER_nondet_int()) {
    x += 8;
  }
  __VERIFIER_assert((x & 5) == 5);
  return 0;
}
