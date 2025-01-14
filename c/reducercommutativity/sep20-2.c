/*
 * Benchmarks used in the paper "Commutativity of Reducers" 
 * which was published at TACAS 2015 and 
 * written by Yu-Fang Chen, Chih-Duo Hong, Nishant Sinha, and Bow-Yaw Wang.
 * http://link.springer.com/chapter/10.1007%2F978-3-662-46681-0_9
 * 
 * We checks if a function is "deterministic" w.r.t. all possible permutations 
 * of an input array.  Such property is desirable for reducers in the 
 * map-reduce programming model.  It ensures that the program always computes 
 * the same results on the same input data set.
 */

#define N 20
#define fun sep

extern void abort(void); 
void reach_error(){}

int sep (int x[N])
{
  long long ret =0;
  for(int i=0;i<N;i++)
  {
    if(x[i]%2==0)
      ret++;
    else
      ret--;
  }
    return ret;
}


int main ()
{
  int x[N];
  int temp;
  int ret;
  int ret2;
  int ret5;

  ret = fun(x);

  temp=x[0];x[0] = x[1]; x[1] = temp;
  ret2 = fun(x);
  temp=x[0];
  for(int i =0 ; i<N-1; i++){
     x[i] = x[i+1];
  }
  x[N-1] = temp;
  ret5 = fun(x);

  if(ret != ret2 || ret !=ret5){ 
    {reach_error();abort();}
  }
  return 1;
}
