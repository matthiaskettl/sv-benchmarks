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
  } *y;
 } *x;
} Stuff;

int main()
{
 struct Innermost im = {3};
 struct Inner inner = {2, &im};
 struct Toplev good = { 1, &inner};
 struct Toplev *ptr = &good;
 ptr->x->y->c = 4;
 ((ptr->x->y->c == 4) ? (0) : __blast_assert ());
 return 0;
}
