extern void abort(void); 
void reach_error(){}

int sum (int x[60])
{
  int i;
  long long ret;
  ret = 0;
  for (i = 0; i < 60; i++) {
    ret = ret + x[i];
  }
  return ret;
}

int main ()
{
  int x[60];
  int temp;
  int ret;
  int ret2;
  int ret5;

  ret = sum(x);

  temp=x[0];x[0] = x[1]; x[1] = temp;
  ret2 = sum(x);
  temp=x[0];
  for(int i =0 ; i<60 -1; i++){
     x[i] = x[i+1];
  }
  x[60 -1] = temp;
  ret5 = sum(x);

  if(ret != ret2 || ret !=ret5){
    {reach_error();abort();}
  }
  return 1;
}
