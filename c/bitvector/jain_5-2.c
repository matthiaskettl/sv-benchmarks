extern void abort(void); 
void reach_error(){}

extern int __VERIFIER_nondet_int(void);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
int main()
{
  unsigned int x,y;

  x=0U;
  y=4U;


  while(1)
    {
      x = x + y;
      y = y +4U;
      
      
      __VERIFIER_assert(x!=30U);
    }
    return 0;
}

