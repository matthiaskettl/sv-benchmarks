extern void abort(void); 
void reach_error(){}

int avg (int x[10])
{
  int i;
  long long ret;
  ret = 0;
  for (i = 0; i < 10; i++) {
    ret = ret + x[i];
  }
  return ret / 10;
}

int main ()
{
  int x[10];
  int temp;
  int ret;
  int ret2;
  int ret5;

  ret = avg(x);

  temp=x[0];x[0] = x[1]; x[1] = temp;
  ret2 = avg(x);
  temp=x[0];
  for(int i =0 ; i<10 -1; i++){
     x[i] = x[i+1];
  }
  x[10 -1] = temp;
  ret5 = avg(x);

  if(ret != ret2 || ret !=ret5){
    {reach_error();abort();}
  }
  return 1;
}
