extern void abort(void); 
void reach_error(){}





void err()
{ ERROR: {reach_error();abort();}}

int __VERIFIER_nondet_int();

int * return_self (int * p)
{
 if (__VERIFIER_nondet_int()){
  return p;
 }else{
  return p;
 }
}

int main()
{
 int a,*q;

 a = 1;



 q = return_self(&a);


 *q = 2;

 if (a != 2) err();
}
