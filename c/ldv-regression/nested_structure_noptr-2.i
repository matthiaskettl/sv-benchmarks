extern void abort(void); 
void reach_error(){}






void __blast_assert()
{
 ERROR: {reach_error();abort();}
}



typedef struct Toplev {
 int a;
 struct Inner {
  int b;
  struct Innermost{
   int c;
  } y;
 } x;
} Stuff;

int main()
{
 struct Toplev good = { 1, {2, {3}}};
 good.x.y.c = 4;
 ((good.x.y.c == 4) ? (0) : __blast_assert ());
 return 0;
}
