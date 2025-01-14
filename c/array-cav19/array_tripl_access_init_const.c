extern void abort(void); 
void reach_error(){}
extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
int main()
{
  int i;
  int N=100000;
  int a[3*N+1];

  for(i=0; i<= N; i++) {
    a[3*i] =0;
    a[3*i+1]=0;
    a[3*i+2]=0;
  }

  for(i=0;i<=3*N;i++)
    __VERIFIER_assert(a[i] >= 0);
  return 0;
}

